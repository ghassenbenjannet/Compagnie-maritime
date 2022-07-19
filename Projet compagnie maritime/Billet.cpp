#include "Billet.h"
#include "Trajet.h"
#include "Passager.h"
#include <iostream>
using namespace std ;

int Billet::n=0;
int Billet::prixdebase=200;


Billet::Billet( Trajet *t){
    n++; id=n;
    trajet=t;
}

Billet::~Billet(){}

Trajet* Billet::gettrajet(){
    return trajet;
}

Passager* Billet::getpassager(){
    return client;
}

void Billet::setpassager(Passager* p){
    client=p;
}

int Billet::getprixdebase(){
    return prixdebase;
}


void  Billet::setprixdebase(int p){
    prixdebase=p;
}

int Billet::getprix(){
    return prix;
}

void::Billet::setprix(int p){
    prix=p;
}

int Billet::getid(){
    return id;
}

void Billet::consulterbillet(){
        cout<<"Billet N°: "<<id<<endl;
        cout<<"Client: "<<client->getnom()<<" "<<client->getprenom()<<endl;
        cout<<"Prix: "<<prix<<" euro"<<endl;
        cout<<"Details du trajet:"<<endl;
        trajet->affiche();
    }
