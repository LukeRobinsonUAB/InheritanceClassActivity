#ifndef ADOPTION_H
#define ADOPTION_H

//#include "animal.h"
#include "shelter.h"
#include <string>
using namespace std;

class Adoption{
    public:
    void adoptanimal(Animal* animal, std::string& adoptername, std::string& contactinfo);
    void displayAdopterinfo();
    void getAdoptioninfo();
    void getAdoptiondetails();
    


    private:
    std::string adoptername;
    std::string contactinfo;

};
#endif
