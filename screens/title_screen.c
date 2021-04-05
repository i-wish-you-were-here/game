//
// Created by 🐱 on 4/1/21.
//

#include "../include/raylib.h"
#include "../screens/screens.h"

static int FramesCounter;
static int FinishScreen;
static float alpha = 1.0f;

void InitTitleScreen(void){
    FramesCounter = 0;
    FinishScreen = 0;
}

void UpdateTitleScreen(void){
    if(IsKeyPressed(KEY_ENTER) || IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
        FinishScreen = 1;
    }
}

void DrawTitleScreen(void){
    ClearBackground(RED);
    DrawText("i wish you were here", GetScreenWidth()/6, GetScreenHeight()/2, 60, Fade(WHITE, alpha));
}

void UnloadTitleScreen(void){

}

int FinishTitleScreen(void){
    return FinishScreen;
}