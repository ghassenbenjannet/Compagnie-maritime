#ifndef __BILLET__H_
#define __BILLET__H_
#include <string>
#include<vector>
#include<iostream>
using namespace std;
class Trajet;
class Passager;

class Billet {
private:
    int static n;
    int id;
    int static prixdebase;
    int prix;
    Passager* client;
    Trajet* trajet;
public:
    Billet(Trajet*);
    ~Billet();
    int getid();
    int getprix();
    void setprix(int);
    void setpassager(Passager*);
    Passager* getpassager();
    void setprixdebase(int);
    int getprixdebase();
    void consulterbillet();
    Trajet* gettrajet();
   
    
    
};

#endif