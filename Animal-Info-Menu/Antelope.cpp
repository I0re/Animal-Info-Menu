#include "Antelope.h"

using namespace std;

/*
This program creates the constructor n destructor for antelope
as well as contains the function of what that animal eats
*/

//constructor for antelope
Antelope::Antelope(const string& CommonName, double Age, const string& Order) : Animal(CommonName, Order, Age) {
    cout << "Invoking Antelope 2-arguement constructor\n" << endl;
}

//destructor for antelope
Antelope::~Antelope() {
    cout << "Invoking the Antelope destructor" << endl;
}

//fucntion what eat for antelope
void Antelope::Eat() const {
    cout << "As an Antelope, I eat Grass, Shoots, and Seeds.\n" << endl;
}

