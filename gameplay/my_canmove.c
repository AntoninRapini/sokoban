/*
** my_canmove.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Thu Dec 15 23:41:29 2016 Antonin Rapini
** Last update Tue Dec 20 18:29:27 2016 Antonin Rapini
*/

#include "my_game.h"
#include "gameplay.h"

int my_isvalidboxpos(t_game *g, int y, int x)
{
  if (y < 0 || x < 0 || y >= g->lines || g->map[y][x] == 0
      || (g->map[y][x] != ' ' && g->map[y][x] != 'O')
      || (g->map[y][x] == 'O'
	  && my_isboxhere(x, y, g->boxes, g->boxcount)))
    return (0);
  return (1);
}

int	my_canmove(t_game *g, int y, int x, t_object player)
{
  if (player.y + y < 0 || player.y + y >= g->lines
      || player.x + x < 0 || g->map[player.y][player.x + x] == '\0')
    return (0);
  if (g->map[player.y + y][player.x + x] == '#')
      return (0);
  if (g->map[player.y + y][player.x + x] == 'X')
    {
      if (!my_isvalidboxpos(g, player.y + (y * 2), player.x + (x * 2)))
	return (0);
      return (2);
    }
  return (1);
}
