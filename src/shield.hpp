/*******************************************************************************
 * ** Description:  Shield class
 * **               This file declare the Shield class, a weapon which improves
 *                  the player chance to take less harm.
 ******************************************************************************/

#ifndef PROJECT5_SHIELD_HPP_
#define PROJECT5_SHIELD_HPP_

#include "weapon.hpp"

class Shield : public Weapon {
    public:
        int defend(int);
};

#endif // PROJECT5_SHIELD_HPP_