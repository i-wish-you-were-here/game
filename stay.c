//
// Created by smeek on 28/03/2021.
//

#include "include/raylib.h"
#include "screens/screens.h"
#include <stdlib.h>

GameScreen currentScreen;

const int screenWidth = 1024;
const int screenHeight = 768;
static void UpdateScreen();

int main(void){
    InitWindow(screenWidth, screenHeight, "i wish you were here");
    SetTargetFPS(60);
//screen initiation here
    while (!WindowShouldClose()){
        UpdateScreen();
    }
}
static void UpdateScreen(void){
    //TODO write UpdateScreen function and define screen transitions
}