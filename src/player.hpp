/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Player class
 * **               This file declares the Player class, which is the main character
 *                  in the game, the player can do various things depending on which
 *                  space it goes into.
 ******************************************************************************/

#ifndef PROJECT5_PLAYER_HPP_
#define PROJECT5_PLAYER_HPP_

#include "character.hpp"
#include "weapon.hpp"

class Player : public Character {
    public:
        explicit Player(int);
        ~Player();
        int attack();
        void defend(int);
        void pickupAttackItem(Weapon*);
        void pickupDefendItem(Weapon*);
    private:
        vector<Weapon*> attackItems;
        vector<Weapon*> defendItems;
        int weaponCount;
};

#endif   // PROJECT5_PLAYER_HPP_