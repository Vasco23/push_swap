NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address
RM = rm -f

# $(VERBOSE).SILENT:

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

SRC_PATH = ./helpers

SRC_NAME =	check_dup.c			\
			copy_av.c			\
			push.c				\
			errors_and_stacks.c	\
			#ft_atol.c			\
			ft_strcmp.c			\
			is_all_numbers.c	\
			swap.c				\
			#rotate.c			\
			#reverse_rotate.c	\
			#3_numbers.c			\
			#confirm.c			\
			#algorithm.c			\
			#list.c				

INC = -I ./ft_printf -I.

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME)) main.c

$(NAME) : $(SRC)
	make -C $(FT_PRINTF_PATH)
	$(CC) $(CFLAGS) $(SRC) $(INC) $(FT_PRINTF) -o $(NAME)
	@printf "                                                \n"
	@printf " ********************************************** \n"
	@printf " ********* Very good, Very nice!!! ************ \n"
	@printf " ********************************************** \n"
	@printf "                                                \n"

clean:
	$(RM)	$(SRC:=.o)
	make clean -C $(FT_PRINTF_PATH)
	@echo "                                                "
	@echo " ********************************************** "
	@echo " **********  So Clean It Shines!  ************* "
	@echo " ********************************************** "
	@echo "                                                "

fclean: clean
	make fclean -C $(FT_PRINTF_PATH)
	$(RM)	$(NAME)

re:	fclean	$(NAME)