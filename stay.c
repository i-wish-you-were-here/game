//
// Created by smeek on 28/03/2021.
//

#include "include/raylib.h"
#include "screens/screens.h"
#include <stdlib.h>

GameScreen currentScreen;

//transitions
static float transitionAlpha = 0.0f;
static bool onTransition = false;
static bool transitionFadeOut = false;
static int transitionFromScreen = -1;
static int transitionToScreen = -1;

const int screenWidth = 1024;
const int screenHeight = 768;

//function for updating frame per tick
static void UpdateScreen();

int main(void){
    InitWindow(screenWidth, screenHeight, "i wish you were here");
    SetTargetFPS(60);
//screen initiation here
    while (!WindowShouldClose()){
        UpdateScreen();
    }
}
//fade transition
static void TransitionScreen(int screen){
    onTransition = true;
    transitionFadeOut = false;
    transitionFromScreen = currentScreen;
    transitionToScreen = screen;
    transitionAlpha = 0.0f;
}
//rectangle transition
static void DrawTransition(){
    DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), Fade(BLACK, transitionAlpha));
}
void ChangeScreen(int screen){
    switch (currentScreen){
        //TODO add screen unloading here
        default: break;
    }
    switch(screen){
        //TODO add screen initiation here
        default: break;
    }
    currentScreen=screen;
}
void upTransition(void){
    if(!transitionFadeOut){
        transitionAlpha += 0.05f;
        if(transitionAlpha >= 1.0){
            transitionAlpha = 1.0;
            switch (transitionFromScreen) {
                //TODO add screen unloading here
                default: break;
            }
            switch (transitionToScreen){
                //TODO add screen switching & definition of currentScreen here
                default: break;
            }
            transitionFadeOut=true;
        }
    }
    else{
        transitionAlpha -= 0.05f;
        if(transitionAlpha<= 0){
            transitionAlpha=0;
            transitionFadeOut=false;
            onTransition=false;
            transitionFromScreen=-1;
            transitionToScreen=-1;
        }
    }
}
static void UpdateScreen(void){
    //TODO write UpdateScreen function and define screen transitions
}
    //TODO add screen drawing statements here