#include"Trajet.h"
#include "Personne.h"
#include<iostream>
#include<string>
using namespace std ;

int Personne::nb=0;

Personne::Personne(string n,string p){
    nom=n; prenom=p;
    nb++; id=nb;
}

Personne::~Personne(){}

int Personne::getid(){
    return id;
}

string Personne::getnom(){
    return nom;
}

string Personne::getprenom() {
    return prenom;
}



