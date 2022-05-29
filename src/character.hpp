/*******************************************************************************
 * ** Description:  Character class
 * **               This file declars method for the Character class.
 ******************************************************************************/

#ifndef PROJECT5_CHARACTER_HPP_
#define PROJECT5_CHARACTER_HPP_

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;

class Character {
    public:
        explicit Character(int);
        virtual int attack();
        virtual void defend(int);
        int getHp();
        void setHp(int);
        bool isAlive();
    protected:
        bool alive;
        int hp;  // health points
};

#endif  // PROJECT5_CHARACTER_HPP_