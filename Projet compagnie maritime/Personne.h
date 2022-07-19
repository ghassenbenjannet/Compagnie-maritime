#ifndef __Personne__H_
#define __Personne__H_
#include <string>
#include<iostream>
using namespace std;
class Trajet ;
class Billet;
class Personne{
    protected:
        string nom;
        string prenom;
        int static nb;
        int id;
    
    public:
        Personne(string ,string);
        ~Personne();
        string getnom();
        string getprenom();
        int getid();
};
#endif
