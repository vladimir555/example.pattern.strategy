//
// Created by volodja on 26.04.2016.
//


#ifndef EXAMPLE_PATTERN_STRATEGY_TROLL_H
#define EXAMPLE_PATTERN_STRATEGY_TROLL_H


#include <iostream>
#include "character.h"


using std::cout;
using std::endl;


class CTroll: public CCharacter {
public:
    CTroll() = default;
    ~CTroll() = default;

    virtual void fight() override;
};


#endif //EXAMPLE_PATTERN_STRATEGY_TROLL_H
