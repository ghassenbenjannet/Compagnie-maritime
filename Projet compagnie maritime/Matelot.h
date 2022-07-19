#ifndef __MATELOT__H_
#define __MATELOT__H_
#include <string>
#include "Membre.h"

class Matelot:public Membre{
public:
    Matelot(string,string);
    ~Matelot();
};
#endif