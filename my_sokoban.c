/*
** my_sokoban.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:04:02 2016 Antonin Rapini
** Last update Thu Dec 15 20:46:21 2016 Antonin Rapini
*/

#include <stdlib.h>
#include "utils.h"
#include "sources.h"

int main(int ac, char **av)
{
  t_game *game;

  if (ac >= 2)
    {
      if ((game = my_getfileinfos(av[1])) == NULL)
	return (84);
      my_display(game);
    }
  return (0);
}
