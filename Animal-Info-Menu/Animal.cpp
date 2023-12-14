#include "Animal.h"

using namespace std;

/*
This program creates different constructors and a animal destructor
this program also contains functions for getter and setter methods
*/

//constructor
Animal::Animal() : Age(0) {
    cout << "Invoking the Animal constructor" << endl;
}

//constructor
Animal::Animal(const string& CommonName, const string& Order, double Age)
    : CommonName(CommonName), Order(Order), Age(Age) {
    cout << "\nInvoking Animal 2-argument constructor" << endl;
}

//destructor
Animal::~Animal() {
    cout << "Invoking the Animal destructor" << endl;
}

//getters
string Animal::GetCommonName() const {
    return CommonName;
}

//getters
string Animal::GetOrder() const {
    return Order;
}

//getters
double Animal::GetAge() const {
    return Age;
}

//setters
void Animal::SetCommonName(const string& CommonName) {
    this->CommonName = CommonName;
}

//setters
void Animal::SetOrder(const string& Order) {
    this->Order = Order;
}

//setters
void Animal::SetAge(double Age) {
    this->Age = Age;
}
