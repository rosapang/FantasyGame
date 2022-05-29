/*******************************************************************************
 * ** Description:  Fountain class
 * **               This file declares the Fountain class.
 ******************************************************************************/

#ifndef PROJECT5_FOUNTAIN_HPP_
#define PROJECT5_FOUNTAIN_HPP_

#include "space.hpp"

// restore health
class Fountain : public Space {
    public:
        Fountain();
        void explore(Player* player);
    private:
        bool full;  // is fountain is full
};

#endif  // PROJECT5_FOUNTAIN_HPP_