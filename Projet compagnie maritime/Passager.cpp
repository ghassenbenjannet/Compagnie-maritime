#include "Passager.h"
#include "Trajet.h"
#include "Billet.h"
#include <iostream>
using namespace std;

list <Passager *> Passager::lespassagers; 

Passager::Passager(string n, string p ) :Personne(n,p){
    lespassagers.push_back(this);
}

Passager::~Passager(){}

int Passager::getpourcentage(){
    return pourcentage;
}

void Passager::achatbillet(Billet* b){
    if(b->gettrajet()->getpass() < b->gettrajet()->getnbpassager()){
        b->gettrajet()->setpass(b->gettrajet()->getpass()+1);
        lesbillets.push_back(b);
        b->setpassager(this);
        (b->gettrajet())->ajouterbillet(b);
        b->gettrajet()->getnavire()->setnombrepassager(((b->gettrajet())->getnavire())->getnombrepassagers()+1);
        b->setprix( (((b->gettrajet()->getnbescale() +1)*b->getprixdebase())*(this->getpourcentage()))/100);
        cout<<"Passager: "<<nom<<" "<<prenom<<" bien ajouté au trajet ''"<<b->gettrajet()->getnom()<<"''"<<endl;
    }
    else {
        cout<<"Impossible d'ajouter "<<nom<<" "<<prenom<<" Maximum déjà atteint au trajet "<<b->gettrajet()->getnom()<<"''"<<endl;
    }

}

bool comparaison(Billet *t1, Billet *t2){

    
    if(t1->gettrajet()->getanneedep()==t2->gettrajet()->getanneedep()){
        if(t1->gettrajet()->getmoisdep()==t2->gettrajet()->getmoisdep()){
            if(t1->gettrajet()->getjourdep()==t2->gettrajet()->getjourdep()){
                return(t1->gettrajet()->getheuredep()<t2->gettrajet()->getheuredep());
            }
            else return (t1->gettrajet()->getjourdep()<t2->gettrajet()->getjourdep());
        }
        else return (t1->gettrajet()->getmoisdep()<t2->gettrajet()->getmoisdep());
    }
    else return (t1->gettrajet()->getanneedep()<t2->gettrajet()->getanneedep());  
}



void Passager::mesbillets(int k){
    list<Passager*>::iterator it;
    list<Billet*> listebillets;
    list<Billet*>::iterator it1;
    for(it=lespassagers.begin();it!=lespassagers.end();it++){
        if((*it)->getid()==k){
            listebillets=(*it)->getlesbillets();
        }
    }
    listebillets.sort(comparaison);
    for(it1=listebillets.begin();it1!=listebillets.end();it1++){
        (*it1)->consulterbillet();
        

        cout<<"-------------------------------------------------"<<endl;
    }
    

}



list<Billet*> Passager::getlesbillets(){
    return lesbillets;
}