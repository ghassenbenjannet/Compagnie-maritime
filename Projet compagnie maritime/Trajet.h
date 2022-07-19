#ifndef __TRAJET__H_
#define __TRAJET__H_
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

class Port;
class Navire;
class Escale;
class Billet;
class Capitain;
class Second;
class Matelot;





class Trajet
{   private:
        string nom;
        static int nb;
        int id;
        Port* depart;
        Port* arrivee;
        Navire* navire;
        vector<Trajet*> lesescales;
        vector<Capitain*> lescapitains;
        vector<Second*> lesseconds;
        vector<Matelot*>lesmatelots;
        vector<Billet*> lesbillets;
        int cap;
        int sec;
        int mat;
        int pass;
        int nbcap;
        int nbsec;
        int nbmat;
        int nbpassager;
        int jour_dep;
        int mois_dep;
        int annee_dep;
        int heure_dep;
        int jour_arr;
        int mois_arr;
        int annee_arr;
        int heure_arr;
        int nbescales; //Pour distinguer ainsi le type du trajet

    public:
        Trajet(string n, Navire* nav, Port* dep, Port* arr,int nbp,int c,int s, int m, int jd,int md,int ad, int hd, int ja, int ma, int aa, int ha);
        Trajet(string n , Port* arr );
        ~Trajet();
        int getjourdep();
        int getheuredep();
        int getmoisdep();
        int getanneedep();
        int getjourarr();
        int getheurearr();
        int getpass();
        void setpass(int);
        string getnom();

        void ajoutescale(string n , Port* p  );
        void ajoutecapitain(Capitain *m);
        void ajoutesecond(Second* s);
        void ajoutematelots(Matelot* m);
        void ajouterbillet(Billet*);
        int getnbpassager();
        int getnbescale();
        Navire* getnavire();
        void affiche();
        




};
#endif // TRAJET_H
