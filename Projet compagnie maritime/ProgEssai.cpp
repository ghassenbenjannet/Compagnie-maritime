#include"Port.cpp"
#include "Navire.cpp"
#include "Normal.cpp"
#include"InsulaireSec.cpp"
#include"Insulaire.cpp"
#include"Trajet.cpp"
#include "Billet.cpp"
#include "fret.cpp"
#include"Membre.cpp"
#include"Capitain.cpp"
#include"Matelot.cpp"
#include"Second.cpp"
#include"Personne.cpp"
#include"Passager.cpp"
#include"Mixte.cpp"
#include<string>
#include<iostream>
using namespace std;

int Trajet::nb=0;


int main(){
    Port dep("ALIANZA","MKL");
    Port p1("es1","ROMA");
    Port p2("es1","MKL");
    Port arri("RROLO","ROMA");
    Mixte nav("nav1",15,100,200);
    cout<<"Nombre maximum passager par la navire ''"<<nav.getnom()<<"'' est: "<<nav.getcapacite()<<endl;
    Trajet tr("tr1", &nav,&dep, &arri,100,1,2, 11, 2 , 7, 2021,  2,  3, 7, 2021 , 3 );
    Trajet tra("tr2", &nav,&dep, &arri,1,1,2, 11, 13 , 7, 2021,  2,  13,  7, 2021 , 22 );

    tr.ajoutescale("ES1", &p1);
    tr.ajoutescale("ES2",&p2);

    InsulaireSec pa("Ghassen","BJ");
    Normal pp("Imen","BS");
    Insulaire pe("Zack","toto");

    Billet b1(&tr);
    Billet b2(&tr);
    Billet b3(&tra);
    Billet b4(&tra);
    

    cout<<"******Verification achat billet ********"<<endl;
    pp.achatbillet(&b2);
    pa.achatbillet(&b1);
    pp.achatbillet(&b3);
    pe.achatbillet(&b4);

    cout<<"******Verification consulter billet ********"<<endl;
    b1.consulterbillet();    

    cout<<"******Verification ajout d'un capitain********"<<endl;
    Capitain mm("Gabriel","Dufour");
    tr.ajoutecapitain(&mm);

    cout<<"******Verification ajout d'autre capitain********"<<endl;
    Capitain m2("Marion","Joyeux");
    tr.ajoutecapitain(&m2);

    cout<<"******Verification ajout second ********"<<endl;
    Second ss("Jean","Lebon");
    tra.ajoutesecond(&ss);

    cout<<"******Verification trajet du mois d'un membre********"<<endl;
    mm.trajetsdumois(2);
    mm.trajetsdumois(7);
    m2.trajetsdumois(7);

    cout<<"********Verification nombre des passagers par navire ********"<<endl;
    cout<<"NBR passager= "<<nav.getnombrepassagers()<<endl;
    
    cout<<"********Verification liste des billets triee**********"<<endl;
    Passager::mesbillets(pp.getid());
}
