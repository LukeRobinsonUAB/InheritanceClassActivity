// g++ main.cpp -o main
#include <iostream>
#include "shelter.cpp"

using namespace std;
int main () {
    cout << "compiles!" << endl;

    Shelter shelter1;

    while (true) {

        cout << "enter the corresponding number to select a menu option" << endl;
        cout << "1. Add a dog" << endl;
        cout << "2. add a cat" << endl;
        cout << "3. remove all animals with a name" << endl;
        cout << "4. diplay all animals" << endl;
        cout << "5. exit program" << endl;

        int option = 1;
        cin >> option;

        switch (option)
        {
        case 1:
            char a = a;
            cin >> a;
            while (a != 'y' && a != 'n') {
                cout << "specify age, name, breed? [y/n]" << endl;
                if (a == 'y') {

                }
                else {
                    
                }
            }
            break;
        case 2:
            cout << "test" << endl;
            break; 
        case 3:
            cout << "Enter name of animal to be removed." << endl;
            std::string name1;
            cin >> name1;
            shelter1.removeAnimal(name1);
            break;
        case 4:
            shelter1.displayAnimals();
            break;
        case 5:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }

    }




    return 0;
}