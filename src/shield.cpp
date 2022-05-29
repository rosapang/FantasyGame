/*******************************************************************************
 * ** Description:  Shield class
 * **               This file implements the Shield class, a weapon which improves
 *                  the player chance to take less harm.
 ******************************************************************************/

#include "shield.hpp"

// with a shield there's 50% chance of reduced damage
int Shield::defend(int value) {
    if (rand() % 2 == 0) {
        cout << "You raised the shiled and only took half the damage." << endl;
        return value / 2;
    }
    return value;
}
