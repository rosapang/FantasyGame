/*******************************************************************************
 * ** Description:  Arsenal class
 * **               This file implements the Arsenal space where player can pick up
 *                  various weapons used to fight the monster.
 ******************************************************************************/

#include "arsenal.hpp"

// constructor
Arsenal::Arsenal() : Space('X') {
}

// there' 50% chance to pickup attack vs. defend items, both are useful
void Arsenal::explore(Player* player) {
    cout << "You found an secret arsenal.";
    if (rand() % 2) {
        // cout << "an axe!" << endl;
        player->pickupAttackItem(new Axe());
    } else {
        // cout << "a shield!" << endl;
        player->pickupDefendItem(new Shield());
    }
}
