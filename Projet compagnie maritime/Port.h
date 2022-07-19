#ifndef __PORT__H_
#define __PORT__H_
#include <iostream>
#include <string>
using namespace std;
class Port{
private:
    string nom;
    string ville;
public:
    Port(string,string);
    ~Port();
    string getnom();
    string getville();
};
#endif