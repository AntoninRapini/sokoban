/*
** my_freegame.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Dec 16 16:32:30 2016 Antonin Rapini
** Last update Tue Dec 20 16:11:03 2016 Antonin Rapini
*/

#include <stdlib.h>
#include "my_game.h"

void	my_freegame(t_game *game)
{
  int	i;

  i = 0;
  while (i < game->lines)
    {
      free(game->map[i]);
      i++;
    }
  free(game->map);
  free(game->boxes);
  free(game->storage);
  free(game);
}
