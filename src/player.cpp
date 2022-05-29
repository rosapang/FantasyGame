/*******************************************************************************
 * ** Description:  Player class
 * **               This file implements the Player class, which is the main character
 *                  in the game, the player can do various things depending on which
 *                  space it goes into.
 ******************************************************************************/

#include "player.hpp"

// constructor
Player::Player(int hp) : Character(hp) {
    weaponCount = 0;
}

// release resources
Player::~Player() {
    for (int i = 0; i < attackItems.size(); i++) {
        delete attackItems[i];
    }
    for (int i = 0; i < defendItems.size(); i++) {
        delete defendItems[i];
    }
}

// pickup attack item
void Player::pickupAttackItem(Weapon* weapon) {
    if (weaponCount < 3) {
        cout << " And picked up an axe!" << endl;
        attackItems.push_back(weapon);
        weaponCount++;
    } else {
        cout << " But cannot pick any more weapons." << endl;
    }
}

// pickup defend item
void Player::pickupDefendItem(Weapon* weapon) {
    if (weaponCount < 3) {
        cout << " And picked up a shield!" << endl;
        defendItems.push_back(weapon);
        weaponCount++;
    } else {
        cout << " But cannot pick any more weapons." << endl;
    }
}

// if player carries attack items, use them, otherwise do a regular attack
int Player::attack() {
    int harm = Character::attack();
    if (attackItems.empty()) {
        return harm;
    }
    for (auto item : attackItems) {
        harm = item->attack(harm);
    }
    return harm;
}

// if player carries defense items, use them, otherwise take the harm
void Player::defend(int harm) {
    if (!defendItems.empty()) {
        for (auto item : defendItems) {
            harm = item->defend(harm);
        }
    }
    Character::defend(harm);
}