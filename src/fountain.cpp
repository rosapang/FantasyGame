/*******************************************************************************
 * ** Description:  Fountain class
 * **               This file implements the Fountain class, which can help the
 *                  player restore some HPs.
 ******************************************************************************/

#include "fountain.hpp"

// keep track so that you can't drink forever
Fountain::Fountain() : Space('+') {
    full = true;
}

// for one time only, player can restore some HP by driking water
void Fountain::explore(Player* player) {
    if (full) {
        int restore = rand() % 50 + 1;
        cout << "You came to a fountain and drank some magic water. ";
        cout << "Restored " << restore << " HP." << endl;
        player->setHp(player->getHp() + restore);
        full = false;
    } else {
        cout << "Sorry you already drank the magic water." << endl;
    }
}