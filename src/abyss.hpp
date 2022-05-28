/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Abyss class
 * **               This file include the declaration of methods for Abyss class.
 ******************************************************************************/

#ifndef PROJECT5_ABYSS_HPP_
#define PROJECT5_ABYSS_HPP_

#include "space.hpp"
#include "boss.hpp"

// where the hero needs to win a fight with the boss
class Abyss : public Space {
    public:
        Abyss();
        void explore(Player* player);
    private:
        Boss* boss;
};

#endif  // PROJECT5_ABYSS_HPP_
