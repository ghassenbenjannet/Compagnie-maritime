#ifndef __SECOND__H_
#define __SECOND__H_
#include "Membre.h"
#include <string>
using namespace std;

class Second:public Membre{
public:
    Second(string,string);
    ~Second();
};
#endif