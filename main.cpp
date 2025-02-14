#include <iostream>
#include <ctime>

#include "raylib.h"
#include "dice.h"

using namespace std;

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Raylib Dice Roller");
    SetTargetFPS(60);

    Dice die(6);
    Texture2D dice1 = LoadTexture("dice1.png");
    Texture2D dice2 = LoadTexture("dice2.png");
    Texture2D dice3 = LoadTexture("dice3.png");
    Texture2D dice4 = LoadTexture("dice4.png");
    Texture2D dice5 = LoadTexture("dice5.png");
    Texture2D dice6 = LoadTexture("dice6.png");
    string message;

    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_SPACE)) {
            int side = die.roll_dice();
            message = "Rolled: " + to_string(side) + ", roll again with space";
       
            BeginDrawing();
            ClearBackground(BLACK);

            switch (side) {
                case 1:
                    DrawTexture(dice1, 100, 100, WHITE);
                    break;
                case 2:
                    DrawTexture(dice2, 100, 100, WHITE);
                    break;
                case 3:
                    DrawTexture(dice3, 100, 100, WHITE);
                    break;
                case 4:
                    DrawTexture(dice4, 100, 100, WHITE);
                    break;
                case 5:
                    DrawTexture(dice5, 100, 100, WHITE);
                    break;
                case 6:
                    DrawTexture(dice6, 100, 100, WHITE);
                    break;
            }

   
            DrawText(message.c_str(), screenWidth / 2 - MeasureText(message.c_str(), 20) / 2, screenHeight / 2, 20, WHITE);

            EndDrawing();
        }
    }


    UnloadTexture(dice1);
    UnloadTexture(dice2);
    UnloadTexture(dice3);
    UnloadTexture(dice4);
    UnloadTexture(dice5);
    UnloadTexture(dice6);

    CloseWindow();

    return 0;
}
