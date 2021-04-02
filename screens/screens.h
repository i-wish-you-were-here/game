//
// Created by smeek on 28/03/2021.
//

#ifndef SCREENS_H
#define SCREENS_H

typedef enum GameScreen {TITLE} GameScreen;

extern GameScreen currentScreen;

//title screen declarations

void InitTitleScreen(void);
void UpdateTitleScreen(void);
void DrawTitleScreen(void);
void UnloadTitleScreen(void);
void FinishTitleScreen(void);