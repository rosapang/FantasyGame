/*******************************************************************************
 * ** Description:  Space class
 * **               This file implements the Space class, a base class where various
 *                  space forms are inheriting from. It tracks common elements like
 *                  links to other spaces, its graph symbol and whether occupied.
 ******************************************************************************/

#include "space.hpp"

// constructor
Space::Space(char ch) {
    symbol = ch;
    up = nullptr;
    down = nullptr;
    left = nullptr;
    right = nullptr;
    occupied = false;  // if player is at this space right now
}

// by default explore does nothing
void Space::explore(Player* player) {
}

// setter for occupied
void Space::setOccupied(bool flag) {
    occupied = flag;
}

// get current symbol depending on if player is here
char Space::getSymbol() {
    if (occupied) {
        return '*';
    } else {
        return symbol;
    }
}

// if hitting the exit
bool Space::isExit() {
    return false;
}

// setter for up link
void Space::setUp(Space* space) {
    up = space;
}

// setter for left link
void Space::setLeft(Space* space) {
    left = space;
}
// setter for right link
void Space::setRight(Space* space) {
    right = space;
}
// setter for down link
void Space::setDown(Space* space) {
    down = space;
}
// getter for up link
Space* Space::getUp() {
    return up;
}

// getter for down link
Space* Space::getDown() {
    return down;
}

// getter for left link
Space* Space::getLeft() {
    return left;
}

// getter for right link
Space* Space::getRight() {
    return right;
}