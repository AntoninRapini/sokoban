/*
** my_creategame.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Thu Dec 15 23:21:37 2016 Antonin Rapini
** Last update Fri Dec 16 15:12:39 2016 Antonin Rapini
*/

#include <stdlib.h>
#include "my_game.h"

t_game		*my_creategame()
{
  t_game	*game;

  if ((game = malloc(sizeof(t_game))) == NULL)
    return (NULL);
  game->lines = 0;
  game->columns = 0;
  game->player.x = 0;
  game->player.y = 0;
  game->boxcount = 0;
  game->storagecount = 0;
  game->boxesplaced = 0;
  return (game);
}
