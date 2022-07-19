#ifndef __INSULAIRESEC__H_
#define __INSULAIRESEC__H_
#include<iostream>
#include "Passager.h"
using namespace std;

class InsulaireSec : public Passager{
    public:
    InsulaireSec(string,string);
    ~InsulaireSec();
};
#endif