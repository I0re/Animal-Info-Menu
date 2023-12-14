#pragma once
#ifndef ANTELOPE_H
#define ANTELOPE_H

#include "Animal.h"

class Antelope : public Animal {
public:
    Antelope(const std::string& CommonName, double Age, const std::string& Order);
    void Eat() const override;
    //destructor
    virtual ~Antelope();
};

#endif
