#ifndef GAME_H
#define GAME_H

#include "raylib.h"
#include "types.h"
#include "config.h"

void initMap(Map *map);
void updateMap(Map *map);
void drawMap(Map *map);
void handleEvent(Map *map);
void game(Map *map);


#endif
