#include "Port.h"
#include <iostream>
using namespace std;
Port::Port(string n, string v){
    nom=n;
    ville=v;
}

Port::~Port(){}

string Port::getnom(){
    return nom;
}
string Port::getville(){
    return ville;
}
