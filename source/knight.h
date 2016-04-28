//
// Created by volodja on 28.04.2016.
//

#ifndef EXAMPLE_PATTERN_STRATEGY_KNIGHT_H
#define EXAMPLE_PATTERN_STRATEGY_KNIGHT_H


#include <iostream>
#include "character.h"


using std::cout;
using std::endl;


class CKnight: public CCharacter {
public:
    CKnight() = default;
    virtual ~CKnight() = default;

    void fight() override;
};


#endif //EXAMPLE_PATTERN_STRATEGY_KNIGHT_H
