/*
** my_isonstorage.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Dec 16 00:11:32 2016 Antonin Rapini
** Last update Tue Dec 20 14:10:17 2016 Antonin Rapini
*/

#include "my_game.h"

int	my_isboxhere(int x, int y, t_object *boxes, int boxcount)
{
  int	i;

  i = 0;
  while (i < boxcount)
    {
      if (x == boxes[i].x && y == boxes[i].y)
	return (1);
      i++;
    }
  return (0);
}
