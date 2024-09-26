#include "shelter.h"
#include <iostream>
// Adds a new animal to the shelter
void Shelter::addAnimal(animal* animal) {
    animals.push_back(animal);
}

// Removes an animal by name when an animal is adopted
void Shelter::removeAnimal(const std::string& name) {
    for (auto it = animals.begin(); it != animals.end(); ++it) {
        if ((*it)->name == name) {
            delete *it; // Free memory before removing the pointer
            animals.erase(it);
            std::cout << name << " has been adopted!\n";
            return;
        }
    }
    std::cout << "Animal not found!\n";
}

// Displays all animals in the shelter
void Shelter::displayAnimals() const {
    if (animals.empty()) {
        std::cout << "No animals in the shelter.\n";
        return;
    }
