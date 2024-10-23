CC := cc
FLAGS := -Wall -Wextra -Werror

all:
	@ $(CC) $(FLAGS) *.c
	@./a.out
