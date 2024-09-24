#include <string>
#include <iostream>
class Animal {
    public:
        Animal() {
            int age = 0;
            std::string name = "No name";
            std::string type = "Animal";

        }

        Animal (int age, std::string name, std::string type) {
            int age = age;
            std::string name = name;
            std::string type = type;
        }

        std::string getType() {
            return this->type;
        }

        void displayInfo () {
            std::cout << "age: " this.age << " name: " << this.name << " Type: " << this.type << endl;
        }


    private:
        int age;
        std::string name;
        std::string type;

};