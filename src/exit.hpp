/*******************************************************************************
 * ** Description:  Exit class
 * **               This file declares the methods for the Exit class.
 ******************************************************************************/

#ifndef PROJECT5_EXIT_HPP_
#define PROJECT5_EXIT_HPP_

#include "space.hpp"

// the hero escaped with success
class Exit : public Space {
    public:
        Exit();
        bool isExit();
        void explore(Player* player);
};

#endif  // PROJECT5_EXIT_HPP_