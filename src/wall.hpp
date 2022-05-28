/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Wall class
 * **               This file declares the Wall class which divides the spaces,
 *                  player cannot cross a wall.
 ******************************************************************************/

#ifndef PROJECT5_WALL_HPP_
#define PROJECT5_WALL_HPP_

#include "space.hpp"

// bounce back
class Wall : public Space {
    public:
        Wall();
};

#endif // PROJECT5_WALL_HPP_