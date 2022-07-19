#ifndef __MEMBRE__H_
#define __MEMBRE__H_
#include<iostream>
#include<string>
#include"Personne.h"
#include <vector>
using namespace std;

class Trajet;

class Membre:public Personne{
private:
    vector<Trajet*> lestrajets;

public:
    Membre(string,string);
    ~Membre();
    void ajoutertrajet(Trajet *);
    void trajetsdumois(int);
};
#endif
