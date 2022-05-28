/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  main method
 * **               The entry point to the game, it creates a game object and starts
 *                  the game.
 ******************************************************************************/

#include "game.hpp"

int main() {
    Game* game = new Game();
    game->start();
    delete game;

    return 0;
}
