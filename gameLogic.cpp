
/*
 *  Created on: 25 November 2018
 *      Author: Lior Sinai
 */

#include "gameLogic.h"


void getStructs(){
    GameObjectStruct pacman;
    pacman.x = 1;
    pacman.y = 1;
    pacman.type = PACMAN;
    pacman.dir = UP;

    std::vector<GameObjectStruct> objects = {pacman};
}

