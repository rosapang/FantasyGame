/*******************************************************************************
 * ** Description:  Axe class
 * **               This file implements the Axe weapon's attack method where you have 50% chance
 *                  to have triple damage.
 ******************************************************************************/

#include "axe.hpp"

// with an axe there's 50% chance of triple damage
int Axe::attack(int value) {
    if (rand() % 2 == 0) {
        cout << "You took out the axe and inflicted triple damage!" << endl;
        return value * 3;
    }
    return value;
}
