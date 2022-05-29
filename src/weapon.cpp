/*******************************************************************************
 * ** Description:  Weapon class
 * **               This file implements the Weapon class which has ability to
 *                  cause more damage in a fight. The attack & defend methods
 *                  are to be overridden in child classes.
 ******************************************************************************/

#include "weapon.hpp"

Weapon::Weapon() {}

// default attack behavior is do to nothing special
int Weapon::attack(int value) {
    cout << "Warn: weapon did not have any effect." << endl;
    return value;
}
// default defend behavior is do to nothing special
int Weapon::defend(int value) {
    cout << "Warn: weapon did not have any effect." << endl;
    return value;
}
