#include "raylib.h"
#include "game.h"
#include "types.h"
#include <stdio.h>

void game(Map *map) {
    drawMap(map);
    handleEvent(map);
}

void updateMap(Map *map) {

    Map TmpMap = *map;
    for (int w = 0; w < WIDTH_COUNT; w++) {
        for (int h = 0; h < HEIGHT_COUNT; h++) {
            int curr_cell = map->grid[w][h];
            int live_cell = map->grid[w + 1][h] + map->grid[w - 1][h] + map->grid[w][h + 1] + map->grid[w][h - 1] + map->grid[w + 1][h - 1] + map->grid[w + 1][h + 1] + map->grid[w - 1][h - 1] + map->grid[w - 1][h + 1];
            int dead_cell = 8 - live_cell;

            if (curr_cell && live_cell < 2) {
                TmpMap.grid[w][h] = 0;
            } else if(curr_cell && live_cell > 3) {
                TmpMap.grid[w][h] = 0;
            } else if(!curr_cell && live_cell == 3) {
                TmpMap.grid[w][h] = 1;
            }
        } 
    }

    *map = TmpMap;
}

void drawMap(Map *map) {
    for (int w = 0; w < WIDTH_COUNT; w++) {
        for (int h = 0; h < HEIGHT_COUNT; h++) {
            
            int y = h * GRID_HEIGHT;
            int x = w * GRID_WIDTH;
            DrawLine(x, y, x, y + GRID_HEIGHT, WHITE);
            DrawLine(x, y, x + GRID_WIDTH, y, WHITE);

            if(map->grid[w][h] == 1) {
                DrawRectangle(x, y, GRID_WIDTH, GRID_HEIGHT, BLUE);
            }
        }
    } 
}

void handleEvent(Map *map) {
  
    if (IsKeyPressed(KEY_SPACE)) {
        updateMap(map); 
    }
}

void initMap(Map *map) {

    for(int w = 0; w < WIDTH_COUNT; w++) {
        for(int h = 0; h < HEIGHT_COUNT; h++) {
            map->grid[w][h] = 0;
        }
     }
   

    map->grid[20][15] = 1;
    map->grid[21][16] = 1;
    map->grid[19][17] = 1;
    map->grid[20][17] = 1;
    map->grid[21][17] = 1;

}
