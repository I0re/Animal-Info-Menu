#include "Tasmanian_Devil.h"

using namespace std;

/*
This program creates the constructor n destructor for Tasmanian Devil
as well as contains the function of what that animal eats
*/

//constructor for Tasmanian Devil
Tasmanian_Devil::Tasmanian_Devil(const string& CommonName, double Age, const string& Order) : Animal(CommonName, Order, Age) {
    cout << "Invoking Tasmanian Devil 2-arguement constructor\n" << endl;
}

//destructor for Tasmanian Devil
Tasmanian_Devil::~Tasmanian_Devil() {
    cout << "Invoking the Tasmanian Devil destructor" << endl;
}

//fucntion what eat for Tasmanian Devil
void Tasmanian_Devil::Eat() const {
    cout << "As a Tasmanian Devil, I eat Mice, Rats, and Rabbits.\n" << endl;
}