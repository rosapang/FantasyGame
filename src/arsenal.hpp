/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Arsenal class
 * **               This file declares methods for the Arsenal class.
 ******************************************************************************/

#ifndef PROJECT5_ARSENAL_HPP_
#define PROJECT5_ARSENAL_HPP_

#include "space.hpp"
#include "axe.hpp"
#include "shield.hpp"

// pickup various weapons to fight the ultimate boss
class Arsenal : public Space {
    public:
        Arsenal();
        void explore(Player* player);
};

#endif // PROJECT5_ARSENAL_HPP_