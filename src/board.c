#include "board.h"
void vvod(char* board[][8]){
        char block = ' ';
/*                          старт          стоп              */
void movePawn(char *piece, int r, int c, int r_end, int c_end){
        board[r_end][c_end] = piece;
        board[r][c] = &block;
 

}
//main
int end=0;
int correctly=0;

    int z=1;
    while(end!=EOF){
    printBoard(board);
    
    if (z%2 != 0)
    printf("Ход белых\n");
     else 
        printf("Ход черных\n");
    
    z++;


    printf("Введите начальное и конечное положение фигуры: \n");
    int r, r_end;
    char c, c_end;
    int int_c, int_c_end;
    scanf("%c%d-%c%d",&c,&r,&c_end, &r_end);
 
     if (r==1){
        r=7;
      } else 
     if (r==2){
    r=6;}  else 
     if (r==3){
    r=5;} else 
    if (r==4){
    r=4;} else
     if (r==5){
    r=3;} else 
     if (r==6){
    r=2;} else 
     if (r==7){
    r=1;} else 
     if (r==8){
    r=0;} else{
      correctly=1;}



        if (c=='h'){
        int_c=0;} else 
     if (c=='g'){
    int_c=1;}  else 
     if (c=='f'){
    int_c=2;} else 
         if (c=='e'){
    int_c=3;} else 
         if (c=='d'){
    int_c=4;} else 
         if (c=='c'){
    int_c=5;} else 
         if (c=='b'){
    int_c=6;} else 
         if (c=='a'){
    int_c=7;} else {
    correctly=1;}



        if (r_end==1){
        r_end=7;} else 
     if (r_end==2){
    r_end=6;}  else 
     if (r_end==3){
    r_end=5;} else 
        if (r_end==4){
    r_end=4;} else
     if (r_end==5){
    r_end=3;} else 
     if (r_end==6){
    r_end=2;} else 
     if (r_end==7){
    r_end=1;} else 
     if (r_end==8){
    r_end=0;} else{
      correctly=1;}

         if (c_end=='h'){
        int_c_end=0;} else 
     if (c_end=='g'){
    int_c_end=1;}  else 
     if (c_end=='f'){
    int_c_end=2;} else 
         if (c_end=='e'){
    int_c_end=3;} else 
         if (c_end=='d'){
    int_c_end=4;} else 
         if (c_end=='c'){
    int_c_end=5;} else 
         if (c_end=='b'){
    int_c_end=6;} else 
         if (c_end=='a'){
    int_c_end=7;} else{
      correctly=1;}


   if (correctly==1){
   printf("Вы ввели неверное значение\n");
   z--;
   correctly--;
   } else {

      printf("%d%d%d%d\n",r, int_c, r_end, int_c_end);
    movePawn(board[r][int_c], r, int_c, r_end, int_c_end);
    }
    printf("\n\n");

}


}













