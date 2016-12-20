/*
** my_movebox.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 20 13:48:00 2016 Antonin Rapini
** Last update Tue Dec 20 15:37:59 2016 Antonin Rapini
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my_game.h"

t_object	*my_getbox(int x, int y, t_game *game)
{
  int		i;

  i = 0;
  while (i < game->boxcount)
    {
      if (game->boxes[i].x == x && game->boxes[i].y == y)
	return (&game->boxes[i]);
      i++;
    }
  return (NULL);
}
