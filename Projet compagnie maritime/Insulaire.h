#ifndef __INSULAIRE__H_
#define __INSULAIRE__H_
#include<iostream>
#include "Passager.h"
using namespace std;

class Insulaire : public Passager{
    public:
    Insulaire(string,string);
    ~Insulaire();
};
#endif