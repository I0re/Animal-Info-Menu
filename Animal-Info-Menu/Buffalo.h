#pragma once
#ifndef BUFFALO_H
#define BUFFALO_H

#include "Animal.h"

class Buffalo : public Animal {
public:
    Buffalo(const std::string& CommonName, double Age, const std::string& Order);
    void Eat() const override;
    //destructor
    virtual ~Buffalo();
};

#endif

