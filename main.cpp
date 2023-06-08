#include "raylib.h"

int main(){
	int width = 500;
	int height = 500;

	int startX = 0;
	int startY = 0;
	
	int endX = 250;
	int endY = 250;

	InitWindow(width, height, "Circular Drawing");
	SetTargetFPS(60);


	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);
		DrawLine(0, 250, 500, 250, BLACK); // draws thin black horizontal line in the middle of the window.



		EndDrawing();
	}

	CloseWindow();

	return 0;
}
