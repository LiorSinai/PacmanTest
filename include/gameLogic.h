//#pragma once

/*
 *  Created on: Nov 25, 2018
 *      Author: Lior Sinai
 */

#ifndef GAME_LOGIC_H_
#define GAME_LOGIC_H_

#include <map>
#include <vector>

#include "GameObjectStruct.h"

class Game
{
  public:
	static void getStructs(std::vector<GameObjectStruct> &objects);
    static void moveDown(std::vector<GameObjectStruct> &objects);
    static void moveUp(std::vector<GameObjectStruct> &objects);
    static void moveLeft(std::vector<GameObjectStruct> &objects);
    static void moveRight(std::vector<GameObjectStruct> &objects);
};

#endif /* GAME_LOGIC_H*/
