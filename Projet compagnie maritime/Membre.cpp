#include"Membre.h"
#include "Trajet.h"
#include "Passager.h"
#include "Port.h"
#include "Billet.h"
#include"Personne.h"
#include<list>
#include<iterator>
#include <iostream>
using namespace std;

Membre::Membre(string n, string p):Personne(n,p){
    
}
Membre::~Membre() {}


void Membre::ajoutertrajet(Trajet* t){
    lestrajets.push_back(t);
}


bool comp(Trajet *t1, Trajet *t2){

    
    if(t1->getanneedep()==t2->getanneedep()){
        if(t1->getmoisdep()==t2->getmoisdep()){
            if(t1->getjourdep()==t2->getjourdep()){
                return(t1->getheuredep()<t2->getheuredep());
            }
            else return (t1->getjourdep()<t2->getjourdep());
        }
        else return (t1->getmoisdep()<t2->getmoisdep());
    }
    else return (t1->getanneedep()<t2->getanneedep());  
}

 void Membre::trajetsdumois(int m){
     cout<<"Membre: "<< nom<<" "<<prenom<<endl;
     cout<<"Pour le mois: "<<m<<endl;
    int h=0;
    list<Trajet*> listetrajets;
    vector<Trajet*>::iterator it1;
    for (it1= lestrajets.begin(); it1!= lestrajets.end(); it1++) {
        if ((*it1)->getmoisdep()==m)
            listetrajets.push_back(*it1);
    }
    listetrajets.sort(comp);
    list <Trajet*>::iterator it;
    for(it=listetrajets.begin(); it!=listetrajets.end(); it++){
        (*it)->affiche();
        cout<<"--------------------------------------------------"<<endl;

        if((*it)->getjourdep()==(*it)->getjourarr())
            h+= (*it)->getheurearr()-(*it)->getheuredep()+1;
        else
            h+=24-(*it)->getheuredep()+(*it)->getheurearr();
    }
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Total d'heures: "<<h<<"h"<<endl;
    cout<<"--------------------------------------------------"<<endl;


}
