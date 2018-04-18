#ifndef one
#define one
#include <stdio.h>
#define black_color printf("%s","\033[1;30m")
#define white_color printf("%s","\033[1;37m")
#define zero_color printf("%s","\033[0m")
void printBoard(char* board[][8]);
void vvod(char* board[][8]);
void colorBoard(int c, int r);
#endif