//
// Created by volodja on 26.04.2016.
//


#include "troll.h"


void CTroll::fight() {
    cout << "i am troll !!!" << endl <<
            "uaaaarrghhh !!!" << endl <<
            "kill you with " << endl;

    if (m_weapon)
        m_weapon->useWeapon();
    else
        cout << " oops ) , i'm empty" << endl;

    cout << endl;
}
