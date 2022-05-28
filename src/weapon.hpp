/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Weapon class
 * **               This file declares the Weapon class which has ability to
 *                  cause more damage in a fight.
 ******************************************************************************/

#ifndef PROJECT5_WEAPON_HPP_
#define PROJECT5_WEAPON_HPP_

#include <iostream>
using std::cout;
using std::endl;

class Weapon {
    public:
        Weapon();
        virtual int attack(int);
        virtual int defend(int);
};

#endif  // PROJECT5_WEAPON_HPP_
