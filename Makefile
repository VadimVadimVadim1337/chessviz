a = src/
all: chess
chess: $(a)main.c $(a)board.c $(a)board_print_plan.c         
	 gcc $(a)main.c $(a)board.c  $(a)board_print_plan.c -o chess