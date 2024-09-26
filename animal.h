#ifndef _ANIMALH_
#define _ANIMALH_

#include <string>
#include <iostream>
class Animal {
    public:
        Animal();

        Animal(int age2, std::string name2, std::string type2);

        std::string getType();

        std::string getName();

        void displayInfo ();

    private:
        int age;
        std::string name;
        std::string type;

};

class Dog : public Animal {
    public:
        Dog();

        Dog (int age2, std::string name2, std::string type2, std::string breed2);

        void displayInfo();

    private:
        int age;
        std::string name;
        std::string type; 
        std::string breed;

};

class Cat : public Animal {
    public:
        Cat();

        Cat (int age2, std::string name2, std::string type2, std::string breed2);

        void displayInfo ();


    private:
        int age;
        std::string name;
        std::string type; 
        std::string breed;

};
#endif