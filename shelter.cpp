#include <vector>
#include <string>
#include <iostream>
#include "animal.cpp" //make interface animal.h instead?


class Shelter {
    public:
        Shelter() {
            std::vector<Animal> animalsVec;
        }

        /*
        Shelter() {
            //constructor to get data from a db perhaps?
        }
        */
    void addAnimal() {
        //take in animalObj? or just attributes and create a new animal matching attrributes?
    }

    void removeAnimal(std::string nameToRemove) {
        for (int i = 0; i < animalsVec.size(); i++) {
            std::string temp = animalsVec[i].name;

            if (temp.compare(nameToRemove)) {
                animalsVec.erase(i);

            }
        }
    }

    void displayAnimals() {
        for (Animal a : animalsVec)
            a.displayInfo();

    }


    private:
        std::vector<Animal> animalsVec;


};