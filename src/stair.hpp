/*******************************************************************************
 * ** Description:  Stair class
 * **               This file declares the Stair class, a basic space which leads
 *                  to other spaces.
 ******************************************************************************/

#ifndef PROJECT5_STAIR_HPP_
#define PROJECT5_STAIR_HPP_

#include "space.hpp"

// take the hero to a different floor
class Stair : public Space {
    public:
        Stair();
        void explore(Player* player);
};

#endif  // PROJECT5_STAIR_HPP_