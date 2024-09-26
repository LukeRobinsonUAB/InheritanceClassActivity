#ifndef _ANIMALH_
#define _ANIMALH_

#include <string>
#include <iostream>
class Animal {
    public:
        Animal() {
            int age = 0;
            std::string name = "No name";
            std::string type = "Animal";

        }

        Animal (int age2, std::string name2, std::string type2) {
            int age = age2;
            std::string name = name2;
            std::string type = type2;
        }

        std::string getType() {
            return this->type;
        }

        std::string getName() {
            return this->name;
        }

        void displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type << std::endl;
        }


    private:
        int age;
        std::string name;
        std::string type;

};

class Dog : public Animal {
    public:
        Dog() {
            int age = 0;
            std::string name = "No name";
            std::string type = "Animal";
            std::string breed = "unknown";

        }

        Dog (int age2, std::string name2, std::string type2, std::string breed2) {
            int age = age2;
            std::string name = name2;
            std::string type = type2;
            std::string breed = breed2;
        }

        void displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type <<  " breed: " << this->breed << std::endl;
        }



    private:
        int age;
        std::string name;
        std::string type; 
        std::string breed;

};

class Cat : public Animal {
    public:
        Cat() {
            int age = 0;
            std::string name = "No name";
            std::string type = "Animal";
            std::string breed = "unknown";

        }

        Cat (int age2, std::string name2, std::string type2, std::string breed2) {
            int age = age2;
            std::string name = name2;
            std::string type = type2;
            std::string breed = breed2;
        }

        void displayInfo () {
            std::cout << "age: " << this->age << " name: " << this->name << " Type: " << this->type <<  " breed: " << this->breed << std::endl;
        }



    private:
        int age;
        std::string name;
        std::string type; 
        std::string breed;

};
#endif