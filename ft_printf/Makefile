# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chcoutur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 10:03:03 by chcoutur          #+#    #+#              #
#    Updated: 2019/06/18 13:56:04 by chcoutur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang

FLAGS = -g3 -Wall -Wextra -Werror
 
SRC_PATH = ./src/
OBJ_PATH = ./obj/
LIB_PATH = ./libft/
INC_PATH = ./includes/
 
SRC_FILES =	ft_printf.c				\
			ft_parsing.c			\
			ft_dis.c				\
			ft_parse_flag.c 		\
			ft_parse_width.c		\
			ft_parse_precision.c	\
			ft_parse_len.c 			\
			ft_parse_type.c 		\
			ft_type_string.c 		\
			ft_type_char.c			\
			ft_type_pointer.c		\
			ft_type_int.c			\
			ft_get_sign.c			\
			ft_unsigned.c 			\
			ft_type_conv.c 			\
			ft_sharp.c				\
			ft_type_float.c			\
			ft_type_percent.c		\
			ft_space_u.c            \
			ft_sp_switch_u.c		\
			ft_space_d.c			\
			ft_float_tools.c		\
			ft_check_zero_d.c		\
			ft_spec_zero_u.c		\
			ft_float_expo.c			\
			ft_sign_float.c			\
			ft_width_float.c		\
			ft_space_float.c		\
			ft_inf_nan.c			\
			ft_fl_ok.c				\
			ft_free_arg.c

INC_FILES = ./includes/ft_printf.h
 
LIB_FILES = libft.a
LIB = $(addprefix $(LIB_PATH), $(LIB_FILES))
LIB_HEADER = $(addprefix $(LIB_PATH), $(INC_PATH))
 
OBJ_FILES = $(SRC_FILES:.c=.o)
    OBJ_EXEC = $(addprefix $(OBJ_PATH), $(OBJ_FILES))
 
all: $(NAME)
 
$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) $(FLAGS) -c $< -o $@ -I $(INC_PATH) -I $(LIB_HEADER)
	@echo "\033[40mCompilation of \033[1m$(notdir $<)\033[0m \033[32mdone.\033[0m"

$(LIB):
	@make -C $(LIB_PATH)

$(NAME): $(LIB) $(OBJ_PATH) $(OBJ_EXEC)
	@cp libft/libft.a $(NAME)
	@ar rc $(NAME) $(OBJ_EXEC)
	@ranlib $(NAME)
	@echo "\033[1;32mThe work is done, $(notdir $(NAME))\033[1;0m\033[32m created.\033[0m"

clean:
	@/bin/rm -rf $(OBJ_PATH)
	@make clean -C $(LIB_PATH)
	@echo "\033[31mObjects files of \033[1;31m$(notdir $(NAME))\033[1;0m\033[31m removed.\033[0m"

fclean: clean
	@make fclean -C $(LIB_PATH)
	@/bin/rm -rf $(NAME)
	@echo "\033[1;31m$(notdir $(NAME))\033[1;0m\033[31m removed.\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
