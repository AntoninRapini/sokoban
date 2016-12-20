/*
** my_checkwin.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Dec 16 15:13:19 2016 Antonin Rapini
** Last update Tue Dec 20 15:56:33 2016 Antonin Rapini
*/

#include "my_game.h"

int my_checkwin(t_game *game)
{
  return (game->boxesplaced == game->storagecount);
}
