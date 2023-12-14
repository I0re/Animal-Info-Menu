#pragma once
#ifndef TASMANIAN_DEVIL_H
#define TASMANIAN_DEVIL_H

#include "Animal.h"

class Tasmanian_Devil : public Animal {
public:
    Tasmanian_Devil(const std::string& CommonName, double Age, const std::string& Order);
    void Eat() const override;
    //destructor
    virtual ~Tasmanian_Devil();
};

#endif

