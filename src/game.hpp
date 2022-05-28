/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Game class
 * **               This file declares the Game class, which has various methods
 *                  to start and keep the game going, it will end if either player
 *                  dies or player killed the monster and found the exit.
 ******************************************************************************/


#ifndef PROJECT5_GAME_HPP_
#define PROJECT5_GAME_HPP_

#include "floor.hpp"
#include "wall.hpp"
#include "stair.hpp"
#include "fountain.hpp"
#include "arsenal.hpp"
#include "abyss.hpp"
#include "exit.hpp"
#include "player.hpp"
#include "space.hpp"

const int ROWS = 14;
const int COLS = 28;

class Game {
    public:
        Game();
        ~Game();
        void start();
    private:
        void loadMap();
        char readInput();
        void setupLinks();
        void printGoal();
        void printMap();
        void makeMove(char);
        Player* player;
        Space* pos;     //  where is the player right now
        Space* map[ROWS][COLS];
        bool isOver;
};

#endif  // PROJECT5_GAME_HPP_
