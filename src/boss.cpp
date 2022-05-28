/*******************************************************************************
 * ** Author:       Ruosha Pang
 * ** Date:         2019-12-08
 * ** Description:  Boss class
 * **               This file implements the Boss class which is a monster lives in the abyss.
 ******************************************************************************/

#include "boss.hpp"

// boss starts decent amount of health points but no special weapons or
// abilities, as they're already pretty daunting
Boss::Boss() : Character(30) {
}
