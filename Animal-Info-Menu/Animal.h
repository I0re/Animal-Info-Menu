#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
public:
    Animal();
    Animal(const std::string& CommonName, const std::string& Order, double Age);
    virtual ~Animal();
    virtual void Eat() const = 0;

    std::string GetCommonName() const;
    std::string GetOrder() const;
    double GetAge() const;
    void SetCommonName(const std::string& CommonName);
    void SetOrder(const std::string& Order);
    void SetAge(double Age);

private:
    std::string CommonName;
    std::string Order;
    double Age;
};

#endif
