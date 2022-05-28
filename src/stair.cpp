/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Stair class
 * **               This file implements the Stair class, a basic space which leads
 *                  to other spaces.
 ******************************************************************************/

#include "stair.hpp"

// constructor
Stair::Stair() : Space('=') {
}

// print a message
void Stair::explore(Player* player) {
    cout << "You found a secret stairs and followed the steps ..." << endl;
}