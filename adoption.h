#ifndef ADOPTION_H
#define ADOPTION_H

//#include "animal.h"
#include "shelter.h"
#include <string>
using namespace std;

class Adoption{
    public:
    void adoptanimal();
    void displayadoptoptions();


    private:
    std::string name;
    std::string contactinfo;

};
#endif
