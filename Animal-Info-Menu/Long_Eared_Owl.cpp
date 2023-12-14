#include "Long_Eared_Owl.h"

using namespace std;

/*
This program creates the constructor n destructor for Long Eared Owl
as well as contains the function of what that animal eats
*/

//constructor for Long Eared Owl
Long_Eared_Owl::Long_Eared_Owl(const string& CommonName, double Age, const string& Order) : Animal(CommonName, Order, Age) {
    cout << "Invoking Long Eared Owl 2-arguement constructor\n" << endl;
}

//destructor for Long Eared Owl
Long_Eared_Owl::~Long_Eared_Owl() {
    cout << "Invoking the Long Eared Owl destructor" << endl;
}

//fucntion what eat for Long Eared Owl
void Long_Eared_Owl::Eat() const {
    cout << "As a Long Eared Owl, I eat Small Birds and Reptiles.\n" << endl;
}
