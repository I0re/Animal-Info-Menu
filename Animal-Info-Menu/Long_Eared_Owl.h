#pragma once
#ifndef LONG_EARED_OWL_H
#define LONG_EARED_OWL_H

#include "Animal.h"

class Long_Eared_Owl : public Animal {
public:
    Long_Eared_Owl(const std::string& CommonName, double Age, const std::string& Order);
    void Eat() const override;
    //destructor
    virtual ~Long_Eared_Owl();
};

#endif

