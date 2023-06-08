#include "raylib.h"

int main(){
	int width = 500;
	int height = 500;

	InitWindow(width, height, "window title");
	SetTargetFPS(60);


	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(WHITE);



		EndDrawing();
	}


	CloseWindow();

	return 0;
}
