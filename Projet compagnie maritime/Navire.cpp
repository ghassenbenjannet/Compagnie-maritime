#include<iostream>
#include"Trajet.h"
#include "Navire.h"
#include<string>
#include<vector>
using namespace std;

int Navire::nb=0;

Navire::Navire(string n, int t, int ch){
    nom=n;
    nb++; id=nb;
    tonnage=t;
    charge=ch;
    nombrepassager=0;
}
    
Navire::~Navire(){};

void Navire::ajoutertrajet(Trajet* t){
    lestrajets.push_back(t);
}

string Navire::getnom(){
    return nom;
}

void Navire::setnom(string n){
    nom=n;
}

vector <Trajet*> Navire::getlestrajets(){
    return lestrajets;
}

int Navire::getnombrepassagers(){
    return nombrepassager;

}

int Navire::getid(){
    return id;
}

int Navire::gettonnage(){
    return tonnage;
}

void Navire::settonnage(int t){
    tonnage=t;
}

int Navire::getcharge(){
    return charge;
}

void Navire::setcharge(int c){
    charge=c;
}

void Navire::setnombrepassager(int n){
    nombrepassager=n;
}
