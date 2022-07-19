#ifndef __NORMAL__H_
#define __NORMAL__H_
#include<iostream>
#include "Passager.h"
using namespace std;

class Normal : public Passager{
    public:
    Normal(string,string);
    ~Normal();
};
#endif