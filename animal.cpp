#include <string>
#include <iostream>
#include "animal.h"


        Animal::Animal() {
            int age = 0;
            std::string name = "No name";
            std::string type = "Animal";

        }

        Animal::Animal (int age2, std::string name2, std::string type2) {
            int age = age2;
            std::string name = name2;
            std::string type = type2;
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
            int age = 0;
            std::string name = "No name";
            std::string type = "Animal";
            std::string breed = "unknown";

        }

        Dog::Dog(int age2, std::string name2, std::string type2, std::string breed2) {
            int age = age2;
            std::string name = name2;
            std::string type = type2;
            std::string breed = breed2;
        }

        void Dog::displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type <<  " breed: " << this->breed << std::endl;
        }

        Cat::Cat() {
            int age = 0;
            std::string name = "No name";
            std::string type = "Animal";
            std::string breed = "unknown";

        }

        Cat::Cat(int age2, std::string name2, std::string type2, std::string breed2) {
            int age = age2;
            std::string name = name2;
            std::string type = type2;
            std::string breed = breed2;
        }

        void Cat::displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type <<  " breed: " << this->breed << std::endl;
        }
