a = src/
all: chess
chess: $(a)board.c $(a)board_print_plan.c         
	 gcc $(a)board.c $(a)board_print_plan.c -o chess