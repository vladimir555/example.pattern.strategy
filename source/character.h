//
// Created by volodja on 26.04.2016.
//


#ifndef EXAMPLE_PATTERN_STRATEGY_CHARACTER_H
#define EXAMPLE_PATTERN_STRATEGY_CHARACTER_H


#include "weapon_behavior.h"


/**
 * person character abstract class
 */
class CCharacter {
public:
    CCharacter() = default;
    virtual ~CCharacter() = default;

    virtual void fight() = 0;
    void setWeapon(IWeaponBehavior::TSharedPtr weapon_behavior);

protected:
    IWeaponBehavior::TSharedPtr m_weapon;
};


#endif //EXAMPLE_PATTERN_STRATEGY_CHARACTER_H
