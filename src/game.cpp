/*******************************************************************************
 * ** Description:  Game class
 * **               This file implements the Game class, which has various methods
 *                  to start and keep the game going, it will end if either player
 *                  dies or player killed the monster and found the exit.
 ******************************************************************************/

#include "game.hpp"

// initialize the game state, we give player 50 HP and place it near the very top left corner
Game::Game() {
    loadMap();
    setupLinks();
    player = new Player(50);
    pos = map[1][1];
    pos->setOccupied(true);
    isOver = false;
}

// release resources
Game::~Game() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            delete map[i][j];
        }
    }
    delete player;
}


// entry point to the games will end if isOver flag is set
void Game::start() {
    printGoal();
    while (!isOver) {
        printMap();
        // read user input
        char move = readInput();
        // makes move
        makeMove(move);
    }
}

// how to play the game
void Game::printGoal() {
    cout << "\n\tWelcome to the fantasy game! You goal as a player is to kill the monster and find" << endl;
    cout << "\tthe exit (with a sign @). You lose HP with every move so make smart moves and " << endl;
    cout << "\tavoid the walls (sign #). There's a fountain (sign +) where you can restore health " << endl;
    cout << "\tpoints, as well as an arsenal where you can pick up weapons. You're free to make " << endl;
    cout << "\tany moves however without any weapons it's very unlikely you'll kill the monster " << endl;
    cout << "\tbarehanded. Enjoy the game!\n" << endl;
    cout << "\t\tPlayer starts from the top left corner with a star sign *\n" << endl;
}

// print the current status of the map and the HP status for player
void Game::printMap() {
    cout << "\n====== Your player currently have " << player->getHp() << " HP ======\n" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << map[i][j]->getSymbol();
        }
        cout << endl;
    }
}

// simulate a move by the player, and if the player enters a space, make interactions with
// the space, set the game status if player died or won
void Game::makeMove(char move) {
    pos->setOccupied(false);
    Space* oldPos = pos;
    switch(move) {
        case 'w':
            pos = pos->getUp();
            break;
        case 'a':
            pos = pos->getLeft();
            break;
        case 's':
            pos = pos->getDown();
            break;
        case 'd':
            pos = pos->getRight();
            break;
        default:
            break;  // should never come here
    }

    // if player hits a wall, come back, and put out a warning message
    if (pos->getSymbol() == '#') {
        cout << "You hit against a wall, ouch!!" << endl;
        pos = oldPos;
    }

    pos->setOccupied(true);
    pos->explore(player);
    isOver = !player->isAlive() || (pos->isExit());
}

// read user input, only 'w', 'a', 's', 'd' are allowed
// which indicates to go up, left, down and right.
char Game::readInput() {
    cout << "Make a move. 'w' (Up), 'a' (Left), 's' (Down), 'd' (Right)" << endl;
    string line;
    getline(cin, line);

    while (!cin || line.length() != 1 || (line[0] != 'w' && line[0] != 'a' && line[0] != 's' && line[0] != 'd')) {
        cout << "Invalid move, only 'w', 'a', 's', 'd' are allowed. Try again." << endl;
        cin.clear();
        getline(cin, line);
    }
    return line[0];
}

// load the initial raw map
void Game::loadMap() {
        // 14 * 28 map
    string rawMap[ROWS] = {
        "############################",
        "#   #      #          #    #",
        "#   #      #     +    =    #",
        "#   #      =          #    #",
        "#   #      ###=########    #",
        "#   =                      #",
        "#   #  #                  B@",
        "#   #  #                   #",
        "#      =   ########=###    #",
        "#      #   #          #    #",
        "#      #   =          #    #",
        "#      #   #    X     =    #",
        "#      #   #          #    #",
        "############################",
    };

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            switch (rawMap[i][j]) {
                case ' ':
                    map[i][j] = new Floor();
                    break;
                case '#':
                    map[i][j] = new Wall();
                    break;
                case '=':
                    map[i][j] = new Stair();
                    break;
                case '+':
                    map[i][j] = new Fountain();
                    break;
                case 'X':
                    map[i][j] = new Arsenal();
                    break;
                case 'B':
                    map[i][j] = new Abyss();
                    break;
                case '@':
                    map[i][j] = new Exit();
                    break;
                default:
                    break;
            }
        }
    }
}

// setup the linked between all spaces (all 4 directions)
void Game::setupLinks() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i > 0) {
                map[i][j]->setUp(map[i-1][j]);
            }
            if (i < ROWS - 1) {
                map[i][j]->setDown(map[i+1][j]);
            }
            if (j > 0) {
                map[i][j]->setLeft(map[i][j-1]);
            }
            if (j < COLS - 1) {
                map[i][j]->setRight(map[i][j+1]);
            }
        }
    }
}