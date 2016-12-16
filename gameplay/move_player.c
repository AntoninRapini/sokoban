/*
** move_player.c for sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 22:55:22 2016 Antonin Rapini
** Last update Fri Dec 16 00:21:03 2016 Antonin Rapini
*/

#include "my_game.h"
#include "gameplay.h"

void	move_player(t_game *game, int y, int x)
{
  int	movetype;

  movetype = my_canmove(game->map, y, x, game->player);
  if (movetype == 1)
    {
      game->map[game->player.y + y][game->player.x + x] = 'P';
      if (my_isonstorage(game->player, game->storage, game->storagecount))
	game->map[game->player.y][game->player.x] = 'O';
      else
	game->map[game->player.y][game->player.x] = ' ';
      game->player.y += y;
      game->player.x += x;
    }
  else if (movetype == 2)
    {
      game->map[game->player.y + y][game->player.x + x] = 'P';
      if (game->map[game->player.y + y * 2][game->player.x + x * 2] == 'O')
	game->map[game->player.y + y * 2][game->player.x + x* 2] = 'A';
      else
	game->map[game->player.y + y * 2][game->player.x + x* 2] = 'X';
      if (my_isonstorage(game->player, game->storage, game->storagecount))
	game->map[game->player.y][game->player.x] = 'O';
      else
	game->map[game->player.y][game->player.x] = ' ';
      game->player.y += y;
      game->player.x += x;
    }
}
