#include "raylib.h"

int main()
{
    // initalize window
    int width{350};
    int height{200};

    InitWindow(width, height, "Main Window");

    // circle coordinates
    int circle_x{175};
    int circle_y{100};

    SetTargetFPS(60);

    while(WindowShouldClose() == false) 
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // game logic starts
        DrawCircle(circle_x, circle_y, 25, BLUE);

        if (IsKeyDown(KEY_D) && circle_x < 350) {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x = circle_x - 10;
        }

        if (IsKeyDown(KEY_W) && circle_y > 0)
        {
            circle_y = circle_y - 10;
        }

        if (IsKeyDown(KEY_S) && circle_y < 200)
        {
            circle_y = circle_y + 10;
        }
        // game logic ends
        EndDrawing();
    }
}