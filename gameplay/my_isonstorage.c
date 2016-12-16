/*
** my_isonstorage.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Dec 16 00:11:32 2016 Antonin Rapini
** Last update Fri Dec 16 00:14:00 2016 Antonin Rapini
*/

#include "my_game.h"

int	my_isonstorage(t_object player, t_object *storage, int storagecount)
{
  int	i;

  i = 0;
  while (i < storagecount)
    {
      if (player.x == storage[i].x && player.y == storage[i].y)
	return (1);
      i++;
    }
  return (0);
}
