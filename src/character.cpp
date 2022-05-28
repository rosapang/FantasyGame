/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Character class
 * **               This file implements the Character class which is a base class
 *                  for both the Player and the Boss (monter). It can make basic
 *                  attack & defense and keeps track of HP.
 ******************************************************************************/

#include "character.hpp"

// constructor sets HP and status
Character::Character(int hp) {
    this->hp = hp;
    alive = true;
}

// if still alive
bool Character::isAlive() {
    return alive;
}

// current health
int Character::getHp() {
    return hp;
}

// set new health points
void Character::setHp(int hp) {
    if (hp <= 0) {
        alive = false;
        cout << "Sorry your player lost all its HP and died. Try again!" << endl;
    } else {
        this->hp = hp;
    }
}

// makes a regular attack
int Character::attack() {
    return rand() % 10 + 1;
}

// makes a regular defence, if HP drops to 0 character is dead
void Character::defend(int harm) {
    hp -= harm;
    if (hp <= 0) {
        alive = false;
    }
}
