#include "Mixte.h"
#include<string>
#include <iostream>

 Mixte::Mixte(string n,int t, int ch, int c):Navire(n,t,ch){
    
    capacite=c;
}

Mixte:: ~Mixte(){}

int Mixte::getcapacite(){
    return capacite;
}
void Mixte::setcapacite(int c){
    capacite=c;
}