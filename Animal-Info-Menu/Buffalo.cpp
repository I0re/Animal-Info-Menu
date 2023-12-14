#include "Buffalo.h"

using namespace std;

/*
This program creates the constructor n destructor for buffalo
as well as contains the function of what that animal eats
*/

//constructor for buffalo
Buffalo::Buffalo(const string& CommonName, double Age, const string& Order) : Animal(CommonName, Order, Age) {
    cout << "Invoking Buffalo 2-arguement constructor\n" << endl;
}

//destructor for buffalo
Buffalo::~Buffalo() {
    cout << "Invoking the Buffalo destructor" << endl;
}

//fucntion what eat for buffalo
void Buffalo::Eat() const {
    cout << "As a Buffalo, I eat Grass, Shrubs, and Leaves.\n" << endl;
}
