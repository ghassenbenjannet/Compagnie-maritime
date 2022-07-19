#ifndef __NAVIRE__H_
#define __NAVIRE__H_
#include <string>
#include <vector>
#include<iostream>
using namespace std;

class Trajet ;
class Navire {
    private:
        static int nb;
        int id;
        string nom;
        vector <Trajet*> lestrajets;
        int tonnage; 
        int charge;
        int nombrepassager; // nombre des passagersQ
    public:
        Navire(string , int , int);
        ~Navire();
        void ajoutertrajet(Trajet*t);
        string getnom();
        void setnom(string);
        vector <Trajet*> getlestrajets();
        int getid();
        int gettonnage();
        void settonnage(int);
        int getcharge();
        void setcharge(int);
        int getnombrepassagers();
        void setnombrepassager(int);
    
};
#endif 
