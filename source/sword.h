//
// Created by volodja on 26.04.2016.
//


#ifndef EXAMPLE_PATTERN_STRATEGY_SWORD_H
#define EXAMPLE_PATTERN_STRATEGY_SWORD_H


#include <iostream>
#include "weapon_behavior.h"


using std::cout;
using std::endl;


class CSword: public IWeaponBehavior {
public:
    CSword() = default;
    ~CSword() = default;

    virtual void useWeapon() override;
};


#endif //EXAMPLE_PATTERN_STRATEGY_SWORD_H
