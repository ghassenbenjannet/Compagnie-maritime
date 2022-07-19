#ifndef __MIXTE__H_
#define __MIXTE__H_
using namespace std;
#include "Navire.h"

class Mixte:public Navire{
private:
    int capacite;
public:
    Mixte(string,int, int , int);
    ~Mixte();
    int getcapacite();
    void setcapacite(int);
};
#endif