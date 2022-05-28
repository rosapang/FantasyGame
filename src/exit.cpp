/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Exit class
 * **               This file implements the Exit class which is the gateway to winning the game.
 ******************************************************************************/

#include "exit.hpp"

// constructor
Exit::Exit() : Space('@') {
}

// if hitting the exit
bool Exit::isExit() {
    return true;
}

// winning message
void Exit::explore(Player* player) {
    cout << "You've successfully found the exit and won the game!" << endl;
    cout << "Congratulations!" << endl;
}