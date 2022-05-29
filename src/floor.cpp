/*******************************************************************************
 * ** Description:  Floor class
 * **               This file implements the Floor class which is a regular space.
 *                  The interaction will just be losing HPs.
 ******************************************************************************/

#include "floor.hpp"

// constructor
Floor::Floor() : Space(' ') {
}

// basic interaction with the space
void Floor::explore(Player* player) {
    player->setHp(player->getHp() - 1);
}