a = src/
all: chess
chess: $(a)board.c          
	gcc $(a)board.c -o chess