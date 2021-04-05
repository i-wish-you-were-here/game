//
// Created by 🐱 on 4/4/21.
//

#include "../include/raylib.h"
#include "../screens/screens.h"
#include <stdlib.h>

static int FramesCounter;
static int FinishScreen;
static int ClickCounter;
static float alpha = 1.0f;

void InitDevScreen(void){
    FramesCounter = 0;
    FinishScreen = 0;
}

void UpdateDevScreen(void){
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsKeyPressed(KEY_ENTER) && ClickCounter = 1){
        FinishScreen = 1;
    }

}

void DrawDevScreen(void) {
    ClearBackground(WHITE);
    DrawText("This is a developmental build", GetScreenWidth() / 2, GetScreenHeight() / 6, 60, Fade(PINK, alpha));
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsKeyPressed(KEY_ENTER)) {
        DrawText("Please report issues via github", GetScreenWidth() / 4, GetScreenHeight() / 8, 50, Fade(PINK, alpha));
        ClickCounter = 1;
    }
}

void UnloadDevScreen(void){

}

int FinishDevScreen(void){
    return FinishScreen;
}


