/*
** my_canmove.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Thu Dec 15 23:41:29 2016 Antonin Rapini
** Last update Fri Dec 16 19:29:46 2016 Antonin Rapini
*/

#include "my_game.h"

int	my_canmove(t_game *g, int y, int x, t_object player)
{
  if (player.y + y < 0 || player.y + y >= g->lines
      || player.x + x < 0 || g->map[player.x + x] == '\0')
    return (0);
  if (g->map[player.y + y][player.x + x] == '#')
      return (0);
  if (g->map[player.y + y][player.x + x] == 'X'
      || g->map[player.y + y][player.x + x] == 'A')
    {
      if (y != 0 && g->map[player.y + (y * 2)][player.x]
	  != ' ' && g->map[player.y + (y * 2)][player.x] != 'O')
	return (0);
      if (x != 0 && g->map[player.y][player.x + (x * 2)]
	  != ' ' && g->map[player.y][player.x + (x * 2)] != 'O')
	return (0);
      return (2);
    }
  return (1);
}
