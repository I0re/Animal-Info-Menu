#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "Antelope.h"
#include "Buffalo.h"
#include "Long_Eared_Owl.h"
#include "Tasmanian_Devil.h"

using namespace std;

/*
This main program starts the program creating a hardcoded array with 3 elems and seeding random number with 100
displays the main menu and then switch cases for number 1-4 asks user for order and then
based on what number is pressed it displays info of which animal is selected
*/

int main() {

    //seed with 100
    srand(100);

    //array hardcoded to size 3 elems
    Animal* Animals[3];

    //loop for animal menu and switch cases
    for (int z = 0; z < 3; ++z) {
        //display main menu
        cout << "Main Menu" << endl;
        cout << "1 - Antelope" << endl;
        cout << "2 - Long Eared Owl" << endl;
        cout << "3 - Buffalo" << endl;
        cout << "4 - Tasmanian Devil" << endl;
        cout << "Enter selection: ";

        //store choosen value
        int values;
        cin >> values;

        string CommonName, Order;
        double Age;

        switch (values) {
        case 1:
            cout << "Enter the Order associated with the Animal you selected: " << endl;
            cin >> Order;
            CommonName = "Antelope";
            //when 1 is pressed a random age for it age between 10.5 n 25.9 is made 
            Age = (static_cast<double>((rand() % 510) + 1050)) / 100.0;
            Animals[z] = new Antelope(CommonName, Age, Order);
            break;
        case 2:
            cout << "Enter the Order associated with the Animal you selected: ";
            cin >> Order;
            CommonName = "Long Eared Owl";
            //when 2 is pressed a random age for it age between 40.0 n 60.0 is made 
            Age = (static_cast<double>((rand() % 2101) + 4000)) / 100.0;
            Animals[z] = new Long_Eared_Owl(CommonName, Age, Order);
            break;
        case 3:
            cout << "Enter the Order associated with the Animal you selected: ";
            cin >> Order;
            CommonName = "Buffalo";
            //when 3 is pressed a random age for it age between 15.3 n 22.1 is made 
            Age = (static_cast<double>((rand() % 581) + 1530)) / 100.0;
            Animals[z] = new Buffalo(CommonName, Age, Order);
            break;
        case 4:
            cout << "Enter the Order associated with the Animal you selected: ";
            cin >> Order;
            CommonName = "Tasmanian Devil";
            //when 4 is pressed a random age for it age between 5.3 n 8.7 is made 
            Age = (static_cast<double>((rand() % 351) + 530)) / 100.0;
            Animals[z] = new Tasmanian_Devil(CommonName, Age, Order);
            break;
        default:
            //show error and repeat
            cout << "Invalid choice. Please select an animal from the given options.";
            z--;
            break;
        }
    }

    //for each animal slected display common name order n age
    for (int i = 0; i < 3; ++i) {
        cout << "I am a " << Animals[i]->GetCommonName() << endl;
        cout << "My Order is " << Animals[i]->GetOrder() << ", and I am " << Animals[i]->GetAge() << " years old" << endl;
        Animals[i]->Eat();
    }
    //call destructors n what animals eat
    for (int i = 0; i < 3; ++i) {
        delete Animals[i];
    }

    return 0;
}
