C = gcc

NAME = fractol

FLAGS = -Wall -Wextra -Werror

LIBFT = libft

SOURCES = main.c alghoriphms.c drawing.c hooks.c service_functions.c

DIR_S = sources

DIR_O = temporary

DIR_MLX = minilibx_macos



all: temporary $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@$(CC) -L $(LIBFT) -lft  $(addprefix ${DIR_S}/,${SOURCES}) -L $(DIR_MLX) -lm -lmlx -framework OpenGL -framework AppKit -o fractol

temporary:
	@mkdir -p temporary

$(DIR_O)/%.o: $(DIR_S)/%.c $(NAME).h
	@$(CC) $(FLAGS) -I $(HEADERS) -c -o $@ $<

norme:
	@make norme -C $(LIBFT)
	@echo
	norminette ./$(HEADERS)
	@echo
	norminette ./$(DIR_S)

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT)
	@rm -rf $(DIR_O)

fclean: clean
	@rm -f $(NAME)
	

re: fclean all

.PHONY: all, temporary, norme, clean, fclean, re
