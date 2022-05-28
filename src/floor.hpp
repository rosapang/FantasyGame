/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Floor class
 * **               This file declares the Floor class which is a regular space.
 ******************************************************************************/

#ifndef PROJECT5_FLOOR_HPP_
#define PROJECT5_FLOOR_HPP_

#include "space.hpp"

class Floor : public Space {
    public:
        Floor();
        void explore(Player* player);
};

#endif  // PROJECT5_FLOOR_HPP_