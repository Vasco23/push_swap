NAME = push_swap

CC = gcc -Wall -Wextra -Werror
RM = rm -f

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

SRC_PATH = ./helpers

SRC_NAME =		check_dup.c\
				copy_av.c\
				errors_and_stacks.c\
				ft_atol.c\
				ft_strcmp.c\
				is_all_numbers.c\
				swap.c\
				push.c\
				rotate.c\
				reverse_rotate.c\
				3_numbers.c\
				confirm.c\

INC = -I ./ft_printf


SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME)) main.c

$(NAME) : $(SRC)
	make -C $(FT_PRINTF_PATH)
	$(CC) $(SRC) $(INC) $(FT_PRINTF) -o $(NAME)
	@echo "                                                "
	@echo " ********************************************** "
	@echo " ********[ Very good, Very nice!!! ]*********** "
	@echo " ********************************************** "
	@echo "                                                "

clean:
	$(RM)	$(SRC:=.o)
	@echo "                                                "
	@echo " ********************************************** "
	@echo " *********[  So Clean It Shines!  ]************ "
	@echo " ********************************************** "
	@echo "                                                "

fclean: clean
		$(RM)	$(NAME)

re:	fclean	$(NAME)