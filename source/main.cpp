#include <iostream>


#include "weapon_behavior.h"
#include "troll.h"
#include "knight.h"
#include "sword.h"
#include "axe.h"


int main() {
    CTroll  troll;

    troll.fight();

    IWeaponBehavior::TSharedPtr sword = std::make_shared<CSword>();
    IWeaponBehavior::TSharedPtr axe = std::make_shared<CAxe>();

    troll.setWeapon(sword);
    troll.fight();

    troll.setWeapon(axe);
    troll.fight();


    CKnight knight;

    knight.setWeapon(sword);
    knight.fight();

    knight.setWeapon(axe);
    knight.fight();

    return 0;
}
