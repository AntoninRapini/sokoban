/*
** my_copygame.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Dec 16 15:50:19 2016 Antonin Rapini
** Last update Fri Dec 16 16:33:16 2016 Antonin Rapini
*/

#include "utils.h"
#include "sources.h"
#include "my_game.h"

t_game		*my_copygame(t_game *game)
{
  t_game	*newgame;

  newgame = my_creategame();
  newgame->map = my_strarraycpy(game->map, game->lines);
  newgame->lines = game->lines;
  newgame->player = game->player;
  newgame->boxes = game->boxes;
  newgame->storage = game->storage;
  newgame->boxcount = game->boxcount;
  newgame->storagecount = game->storagecount;
  newgame->boxesplaced = 0;
  return (newgame);
}
