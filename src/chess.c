#include <stdio.h>
#define black_color printf("%s","\033[1;30m")
#define white_color printf("%s","\033[1;37m")
#define zero_color printf("%s","\033[0m")
void colorBoard(int c, int r);
int main()
{
	char *board[8][8];
    char white_pawn = 'p';
    char white_rook = 'r';
    char white_night = 'n';
    char white_bishop = 'b';
    char white_queen = 'q';
    char white_king = 'k';
    char white_block = ' ';
    char black_pawn = 'P';
    char black_rook = 'R';
    char black_night = 'N';
    char black_bishop = 'B';
    char black_queen = 'Q';
    char black_king = 'K';
    char block = ' ';
    char *lostBlackPieces[16];
    char *lostWhitePieces[16];
    int correctly=0;



    
    void initBoard(){
    	for(int i = 0; i < 8; i++){
    		for(int j = 0; j<8; j++){
    			if(i==6){
    				board[i][j] = &white_pawn;
                }
                else if (i != 7 || 1 !=0 || i != 1 || i !=6){
                	board[i][j]=&block;
                }

                if(i==1)
    				board[i][j] = &black_pawn;
    		}
    	}
    

    board[7][0]=&white_rook;
    board[7][1]=&white_night;
    board[7][2]=&white_bishop;
    board[7][3]=&white_queen;
    board[7][4]=&white_king;
    board[7][5]=&white_bishop;
    board[7][6]=&white_night;
    board[7][7]=&white_rook;

    board[0][0]=&black_rook;
    board[0][1]=&black_night;
    board[0][2]=&black_bishop;
    board[0][3]=&black_queen;
    board[0][4]=&black_king;
    board[0][5]=&black_bishop;
    board[0][6]=&black_night;
    board[0][7]=&black_rook;
        }


    void printBoard(){
    	int i_i=0;
    	int numeral_board=8;
    	for (int r = 0; r < 8; r++){
    		for (int c = 0; c < 8; c++){
                
                if (i_i==0 || i_i==8 || i_i==16 || i_i==24 || i_i==32
    				|| i_i==40 || i_i==48 || i_i==56){
    			printf("%d", numeral_board);
    	          numeral_board--;}  //для нумерации по столбцу

                colorBoard(c,r);
                i_i++;
    			printf("[");
    			zero_color;
    			printf("%c", *(board[r][c]));
                colorBoard(c,r);
    			printf("]");
    			zero_color;
 
    		}
    		printf("\n");
    	}
    	printf("  h  g  f  e  d  c  b  a\n"); //нумерация по вертикали
    }

/*                          старт          стоп              */
void movePawn(char *piece, int r, int c, int r_end, int c_end){
    	board[r_end][c_end] = piece;
    	board[r][c] = &block;
 

}
//main
int end;
    initBoard();
    int z=1;
    while(end!=EOF){
    printBoard();
    
    if (z%2 != 0)
    printf("Ход белых\n");
     else 
    	printf("Ход черных\n");
    
    z++;


    printf("Введите начальное и конечное положение фигуры: \n");
    int r, r_end;
    char c, c_end;
    int int_c, int_c_end;
    scanf("%s%d%s%d",&c,&r,&c_end, &r_end);

     if (r==1){
    	r=7;} else 
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
//char


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
    } else {
    movePawn(board[r][int_c], r, int_c, r_end, int_c_end);
  }
    printf("\n\n");

}


	return 0;
}








    void colorBoard(int c, int r){
   	          if (r%2 == 0){ //если строка нечётная то
                      if (c%2 == 0 )
    	                  white_color;
                      else
    	                  black_color;
    	          }

    	          if (r%2 != 0){ //если строка чётная то
                      if (c%2 != 0 )
    	                  white_color;
                      else
    	                  black_color;
    	          }    	

    }

