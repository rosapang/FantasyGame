/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Abyss class
 * **               This file include the implementation of the constructor,
 *                  as well as the how player interacts with the abyss by having
 *                  a fight with a monster.
 ******************************************************************************/

#include "abyss.hpp"

// constructor
Abyss::Abyss() : Space('B') {
}

// fight with monter in abyss, this is where weapons are useful
void Abyss::explore(Player* player) {
    boss = new Boss();

    cout << "You accidentally fall into an abyss and a vicious monster is waiting for you." << endl;
    cout << "Take out your weapon and defeat the monster!" << endl;

    while (player->isAlive() && boss->isAlive()) {
        int attackPoints = player->attack();
        boss->defend(attackPoints);

        if (boss->isAlive()) {
            attackPoints = boss->attack();
            player->defend(attackPoints);
        }
    }
    if (player->isAlive()) {
        cout << "Hooray! You killed the monster." << endl;
    } else {
        cout << "I'm sorry you lost the fight, try to pickup more weapons next time." << endl;
    }
    delete boss;
}