#include "board.h"
void printBoard(char* board[][8]){
        int i_i=0;
        int numeral_board=8;
        for (int r = 0; r < 8; r++){
            for (int c = 0; c < 8; c++){
                
                if (i_i==0 || i_i==8 || i_i==16 || i_i==24 || i_i==32
                    || i_i==40 || i_i==48 || i_i==56){
                printf("%d", numeral_board);
                  numeral_board--;}  //для нумерации по столбцу

                //colorBoard(c,r);
                i_i++;
                printf("[");
                //zero_color;
                printf("%c", *(board[r][c]));
                //colorBoard(c,r);
                printf("]");
                //zero_color;
 
            }
            printf("\n");
        }
        printf("  h  g  f  e  d  c  b  a\n"); //нумерация по вертикали
    }