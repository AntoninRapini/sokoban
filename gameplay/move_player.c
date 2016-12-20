/*
** move_player.c for sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 22:55:22 2016 Antonin Rapini
** Last update Tue Dec 20 15:56:55 2016 Antonin Rapini
*/

#include <ncurses.h>
#include "my_game.h"
#include "gameplay.h"

void simple_move(t_game *game, int y, int x)
{
  game->map[game->player.y + y][game->player.x + x] = 'P';
  if (my_isonstorage(game->player, game->storage, game->storagecount))
    game->map[game->player.y][game->player.x] = 'O';
  else
    game->map[game->player.y][game->player.x] = ' ';
  game->player.y += y;
  game->player.x += x;
}

int push_move(t_game *game, int y, int x)
{
  game->map[game->player.y + y][game->player.x + x] = 'P';
  if (game->map[game->player.y + y * 2][game->player.x + x * 2] == 'O')
    game->boxesplaced++;
  game->map[game->player.y + y * 2][game->player.x + x * 2] = 'X';
  my_movebox(my_getbox(game->player.x + x, game->player.y + y, game),
	     game->player.x + (x * 2), game->player.y + (y * 2));
  if (my_isonstorage(game->player, game->storage, game->storagecount))
    game->map[game->player.y][game->player.x] = 'O';
  else
    game->map[game->player.y][game->player.x] = ' ';
  game->player.y += y;
  game->player.x += x;
  if (my_isonstorage(game->player, game->storage, game->storagecount))
    game->boxesplaced--;
  if (my_checkwin(game))
    return (1);
  return (0);
}

int	move_player(t_game *game, int key)
{
  int	movetype;
  int	x;
  int	y;

  y = (key == KEY_DOWN) - (key == KEY_UP);
  x = (key == KEY_RIGHT) - (key == KEY_LEFT);
  if (!x && !y)
    return (0);
  movetype = my_canmove(game, y, x, game->player);
  if (movetype == 1)
    simple_move(game, y, x);
  else if (movetype == 2)
    if (push_move(game, y, x))
      return (1);
  return (2);
}
