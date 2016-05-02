//
// Created by volodja on 28.04.2016.
//


#ifndef EXAMPLE_PATTERN_STRATEGY_AXE_H
#define EXAMPLE_PATTERN_STRATEGY_AXE_H


#include <iostream>
#include "weapon_behavior.h"


using std::cout;
using std::endl;


class CAxe: public IWeaponBehavior {
public:
    CAxe() = default;
    virtual ~CAxe() = default;

    virtual void useWeapon() override;
};


#endif //EXAMPLE_PATTERN_STRATEGY_AXE_H
