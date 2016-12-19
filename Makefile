##
## Makefile for my_ls in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_ls
## 
## Made by Antonin Rapini
## Login   <antonin.rapini@epitech.net>
## 
## Started on  Tue Nov 29 08:50:17 2016 Antonin Rapini
## Last update Mon Dec 19 18:03:18 2016 Antonin Rapini
##

CFLAGS	+= -Wall -Werror -Wextra
CFLAGS 	+= -I include

SRC	=	utils/my_nbrlen.c		\
		utils/my_getnbr.c		\
		utils/my_putchar.c		\
		utils/my_show_game.c		\
		utils/my_getfileinfos.c		\
		utils/my_file_togame.c		\
		utils/my_strlen.c		\
		utils/my_strdup.c		\
		utils/my_strarraycpy.c		\
		utils/my_fillmap.c		\
		sources/my_display.c		\
		sources/my_creategame.c		\
		sources/my_copygame.c		\
		sources/my_freegame.c		\
		gameplay/my_checkwin.c		\
		gameplay/move_player.c		\
		gameplay/my_canmove.c		\
		gameplay/my_isonstorage.c	\
		my_sokoban.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

$(NAME): $(OBJ)
	gcc $(OBJ) -lncurses -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
