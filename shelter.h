#ifndef SHELTER_H
#define SHELTER_H

#include "animal.h"
#include <vector>
#include <string>


class Shelter {

public:
    void addAnimal(Animal* animal);
    void removeAnimal(const std::string& name);
    void displayAnimals() const;
    
    ~Shelter(); // Destructor


    private:
    std::vector<Animal*> animals; // Collection of Animal pointers

};

#endif
