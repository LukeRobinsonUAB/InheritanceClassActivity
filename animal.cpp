#include <string>
#include <iostream>
#include "animal.h"


        Animal::Animal() {
            age = 0;
            name = "No name";
            type = "Animal";

        }

        Animal::Animal (int age2, std::string name2, std::string type2) {
            age = age2;
            name = name2;
            type = type2;
        }

        std::string Animal::getType() {
            return this->type;
        }

        std::string Animal::getName() {
            return this->name;
        }

        void Animal::displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type << std::endl;
        }



        Dog::Dog() {
            age = 0;
            name = "No name";
            type = "dog";
            breed = "unknown";

        }

        Dog::Dog(int age2, std::string name2, std::string type2, std::string breed2) {
            age = age2;
            name = name2;
            type = type2;
            breed = breed2;
        }

        void Dog::displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type <<  " breed: " << this->breed << std::endl;
        }

        Cat::Cat() {
            age = 0;
            name = "No name";
            type = "cat";
            breed = "unknown";

        }

        Cat::Cat(int age2, std::string name2, std::string type2, std::string breed2) {
            age = age2;
            name = name2;
            type = type2;
            breed = breed2;
        }

        void Cat::displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type <<  " breed: " << this->breed << std::endl;
        }
