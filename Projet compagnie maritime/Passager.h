#ifndef __PASSAGER__H_
#define __PASSAGER__H_
#include<iostream>
#include<string>
#include "Personne.h"
#include <list>
using namespace std;

class Billet;

class Passager:public Personne{
protected:
    static list  <Passager *> lespassagers;
    list<Billet*> lesbillets;
    int pourcentage;

public:
    Passager(string,string);
    ~Passager();
    list<Billet*> getlesbillets();
    int getpourcentage();
    void achatbillet(Billet*);
    static void mesbillets(int);
};
#endif
