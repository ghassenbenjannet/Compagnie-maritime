#include <iostream>
#include "Trajet.h"
#include "Passager.h"
#include "Port.h"
#include "Billet.h"
#include"capitain.h"
#include"Second.h"
#include "Matelot.h"
#include<string>
#include <iterator>
#include<vector>
using namespace std;



Trajet::Trajet(string n, Navire* nav,Port* dep, Port* arr,int nbp,int c,int s, int m, int jd,int md,int ad, int hd, int ja, int ma, int aa, int ha){
    nb++;
    static int nbbillet=0;
    id=nb;
    nom=n;
    navire=nav;
    nav->ajoutertrajet(this);
    depart=dep;
    arrivee= arr;
    nbcap=c; nbsec=s;nbmat=m; nbpassager=nbp;
    jour_dep=jd; mois_dep=md;annee_dep=ad; heure_dep=hd;
    jour_arr=ja;mois_arr=ma; annee_arr=aa;heure_arr=ha;
    nbescales=0;
    cap=0;sec=0;mat=0;pass=0;
}
Trajet::Trajet(string n , Port* arr){
    nom=n;
    arrivee=arr;
}

Trajet::~Trajet(){}

int Trajet::getjourdep(){
    return jour_dep;
}
        
int Trajet::getheuredep(){
    return heure_dep;
}

int Trajet::getanneedep(){
    return annee_dep;
}

int Trajet::getmoisdep(){
    return mois_dep;
}

int Trajet::getheurearr(){
    return heure_arr;
}

int Trajet::getjourarr(){
    return jour_arr;
}

string Trajet::getnom(){
    return nom;
}

int Trajet::getpass(){
    return pass;
}

void Trajet::setpass(int n){
    pass=n;
}

void Trajet::ajoutescale(std::string n , Port* p ){
    Trajet es (n,p);
    lesescales.push_back(&es);
    nbescales++;
}

void Trajet::ajoutecapitain(Capitain* m){
    if(cap<nbcap){
        cap++;
        lescapitains.push_back(m);
        m->ajoutertrajet(this);
        cout<<"Bien ajouté"<<endl;
    }
    else {
        cout<<"Impossible d'ajouter un Capitain: Maximum déjà atteint"<<endl;
    }
}

void Trajet::ajoutesecond(Second* s){
    if(sec<nbsec){
        lesseconds.push_back(s);
        s->ajoutertrajet(this);
        cout<<"Bien ajouté"<<endl;

    }
    else{
        cout<<"Impossible d'ajouter un Second: Maximum déjà atteint"<<endl;
    }
}

void Trajet::ajoutematelots(Matelot* m){
    if(mat<nbmat){
        lesmatelots.push_back(m);
        m->ajoutertrajet(this);
        cout<<"Bien ajouté"<<endl;

    }
    else{        
        cout<<"Impossible d'ajouter un Matelot : Maximum déjà atteint"<<endl;
    }      
}

int Trajet::getnbpassager(){
    return nbpassager;
}

int Trajet::getnbescale(){
    return nbescales;
}
Navire* Trajet::getnavire(){
    return navire;
}


void Trajet::ajouterbillet(Billet* b){
    lesbillets.push_back(b);
}

void Trajet::affiche(){        
        cout<<"Nom du trajet: "<<nom<<endl;
        cout<<"Depart: "<< depart->getnom()<<endl;
        cout<<"Destination "<<arrivee->getnom()<<endl;
        cout<<"Date depart: "<<jour_dep<<"/"<<mois_dep<<"/"<<annee_dep<<" Heure: "<<heure_dep<<endl;
        cout<<"Date arrivee: "<<jour_arr<<"/"<<mois_arr<<"/"<<annee_arr<<" Heure: "<<heure_arr<<endl;
        if(nbescales>0)
        cout<<"Type du Trajet: Avec "<<nbescales << "escale(s)"<<endl;
        else
        cout<<"Type du trajet: sans escales"<<endl;

}



