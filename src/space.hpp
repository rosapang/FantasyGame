/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Space class
 * **               This file declares the Space class, a base class where various
 *                  space forms are inheriting from. It tracks common elements like
 *                  links to other spaces, its graph symbol and whether occupied.
 ******************************************************************************/

#ifndef PROJECT5_SPACE_HPP_
#define PROJECT5_SPACE_HPP_

#include "player.hpp"

class Space {
    public:
        Space();
        explicit Space(char);
        Space(const Space& space);
        char getSymbol();
        virtual void explore(Player*);
        void setUp(Space*);
        void setDown(Space*);
        void setLeft(Space*);
        void setRight(Space*);
        Space* getUp();
        Space* getDown();
        Space* getLeft();
        Space* getRight();
        void setOccupied(bool flag);
        virtual bool isExit();
    protected:
        Space* up;
        Space* down;
        Space* left;
        Space* right;
        bool occupied;
        char symbol;
};

#endif  // PROJECT5_SPACE_HPP_
