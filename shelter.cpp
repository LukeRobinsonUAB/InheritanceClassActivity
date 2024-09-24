#include <vector>
#include <string>
#include <iostream>
#include "animal.cpp" //make interface animal.h instead?


class Shelter {
    public:
        Shelter() {
            std::vector<Animal> animalsVec;
        }

      
    void addAnimal() {

    }

    void removeAnimal(std::string nameToRemove) {
        for (int i = 0; i < animalsVec.size(); i++) {
            std::string temp = animalsVec[i].getName();
            if (!temp.compare(nameToRemove))
                animalsVec.erase(animalsVec.begin() + i);
        }
    }

    void displayAnimals() {
        for (Animal a : animalsVec)
            a.displayInfo();
    }


    private:
        std::vector<Animal> animalsVec;


};