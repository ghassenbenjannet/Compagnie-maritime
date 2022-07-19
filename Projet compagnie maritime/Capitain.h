#ifndef __CAPITAIN__H_
#define __CAPITAIN__H_
#include "Membre.h"
#include <string>
using namespace std;

class Capitain:public Membre{
public:
    Capitain(string,string);
    ~Capitain();
};
#endif