//
// Created by volodja on 26.04.2016.
//


#include "character.h"


void CCharacter::setWeapon(IWeaponBehavior::TSharedPtr weapon_behavior) {
    m_weapon = weapon_behavior;
}
