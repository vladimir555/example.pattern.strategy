//
// Created by volodja on 26.04.2016.
//

#ifndef EXAMPLE_PATTERN_STRATEGY_IWEAPONBEHAVIOR_H
#define EXAMPLE_PATTERN_STRATEGY_IWEAPONBEHAVIOR_H


#include <memory>

/**
 * weapon intrface
 */
class IWeaponBehavior {
protected:
    virtual ~IWeaponBehavior() = default;

public:
    typedef std::shared_ptr<IWeaponBehavior> TSharedPtr;

    virtual void useWeapon() = 0;
};


#endif //EXAMPLE_PATTERN_STRATEGY_IWEAPONBEHAVIOR_H
