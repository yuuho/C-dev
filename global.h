﻿
#ifndef _GLOBAL_H_
#define _GLOBAL_H_

typedef enum {
    MENU,
    SELECTOR,
    GAME,
    GAME_OVER,
    RANKING
} STATE;

extern STATE state;

extern int window_width;
extern int window_height;
extern int viewport_start_x;
extern int viewport_start_y;
extern int viewport_width;
extern int viewport_height;
extern int frame_count;
extern unsigned int refresh_msec;

#define MAX_FRAME 100000000
#define INITIAL_MSEC 30

#define INITIAL_WIDTH 1280
#define INITIAL_HEIGHT 720
#define GAME_NAME "Flappy Cube"

#define FINISHED   0
#define UNFINISHED 1

#define OFF 0
#define ON  1

#define UPPER_FRAME_OUT 12
#define LOWER_FRAME_OUT -10

#endif // _GLOBAL_H_
