#include <string>

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



    private:
        int age;
        std::string name;
        std::string type;

};