#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"

#include "game.h"
#include "types.h"

int main() {

	InitWindow(WIDTH, HEIGHT, "Game Of Life");
	SetTargetFPS(60);
    
    Map map;
    initMap(&map);
    
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
        
        game(&map);

		EndDrawing();
	}


	CloseWindow();

	return 0;
}


