//
// Created by smeek on 28/03/2021.
//

#ifndef SCREENS_H
#define SCREENS_H

typedef enum GameScreen {TITLE, DEV} GameScreen;

extern GameScreen currentScreen;

//dev screen declarations

void InitDevScreen(void);
void UpdateDevScreen(void);
void DrawDevScreen(void);
void UnloadDevScreen(void);
int FinishDevScreen(void);

//title screen declarations

void InitTitleScreen(void);
void UpdateTitleScreen(void);
void DrawTitleScreen(void);
void UnloadTitleScreen(void);
int FinishTitleScreen(void);

