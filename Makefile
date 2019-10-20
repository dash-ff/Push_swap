
PS = push_swap

CH = checker

INC = ./inc/push_swap.h

LIB = libft/libft.a

PSFILES = ft_cheack.c mas.c push_swap.c sorting.c\
			orders.c ft_market.c tools.c ps_commands.c \
			ps_commands2.c ps_commands3.c commands.c \
			commands2.c commands3.c ft_price.c

CHFILES = checker.c ft_cheack.c commands.c commands2.c\
			commands3.c mas.c tools.c get_next_line.c

PSSRC = $(addprefix src/,$(PSFILES))

PSOBJ = $(addprefix obj/,$(PSFILES:.c=.o))

CHSRC = $(addprefix src/,$(CHFILES))

CHOBJ = $(addprefix obj/,$(CHFILES:.c=.o))

FLAGS = -Wall -Wextra -Werror

all : $(PS) $(CH) 

$(PS) : $(PSOBJ)
	@make -C libft/
	@gcc -o $(PS) $(PSOBJ) $(LIB)

$(CH) : $(CHOBJ)
	@make -C libft/
	@gcc -o $(CH) $(CHOBJ) $(LIB)

obj/%.o: src/%.c $(INC)
	@mkdir -p obj/
	@gcc $(FLAGS) -Iinc -o $@ -c $<

clean :
	@make clean -C libft/
	@rm -rf obj/

fclean : clean
	@make fclean -C libft/
	@rm -f $(PS)
	@rm -f $(CH)

re : fclean all