#ifndef __FRET__H_
#define __FRET__H_
using namespace std;
#include "Navire.h"
#include<iostream>

class Fret:public Navire{
public:
    Fret(string,int, int);
    ~Fret();
};
#endif