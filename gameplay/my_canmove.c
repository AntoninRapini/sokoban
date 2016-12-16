/*
** my_canmove.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Thu Dec 15 23:41:29 2016 Antonin Rapini
** Last update Fri Dec 16 00:21:40 2016 Antonin Rapini
*/

#include "my_game.h"

int	my_canmove(char **map, int y, int x, t_object player)
{
  if (map[player.y + y][player.x + x] == '#')
      return (0);
  if (map[player.y + y][player.x + x] == 'X'
      || map[player.y + y][player.x + x] == 'A')
    {
      if (y != 0 && map[player.y + (y * 2)][player.x]
	  != ' ' && map[player.y + (y * 2)][player.x] != 'O')
	return (0);
      if (x != 0 && map[player.y][player.x + (x * 2)]
	  != ' ' && map[player.y][player.x + (x * 2)] != 'O')
	return (0);
      return (2);
    }
  return (1);
}
