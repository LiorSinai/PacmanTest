/*
 *  Created on: Nov 25, 2018
 *      Author: Lior Sinai
 */

#include "gameLogic.h"
#include <iostream>

void Game::getStructs(std::vector<GameObjectStruct> &objects)
{
    GameObjectStruct pacman;
    pacman.x = 1;
    pacman.y = 1;
    pacman.type = PACMAN;
    pacman.dir = UP;

    objects.push_back(pacman);
}

void Game::moveDown(std::vector<GameObjectStruct> &objects)
{
	for (GameObjectStruct &gameObject : objects)
	{
		if (gameObject.type == PACMAN)
		{
            gameObject.y+= 0.25;
            gameObject.dir = DOWN;
            break;
		}
	}
}

void Game::moveUp(std::vector<GameObjectStruct> &objects)
{
    for (GameObjectStruct &gameObject : objects) {
        if (gameObject.type == PACMAN) {
            gameObject.y -= 0.25;
            gameObject.dir = UP;
            break;
        }
    }
}

void Game::moveLeft(std::vector<GameObjectStruct> &objects)
{
    for (GameObjectStruct &gameObject : objects) {
        if (gameObject.type == PACMAN) {
            gameObject.x -= 0.25;
            gameObject.dir = LEFT;
            break;
        }
    }
}

void Game::moveRight(std::vector<GameObjectStruct> &objects)
{
    for (GameObjectStruct &gameObject : objects) {
        if (gameObject.type == PACMAN) {
            gameObject.x += 0.25;
            gameObject.dir = RIGHT;
            break;
        }
    }
}