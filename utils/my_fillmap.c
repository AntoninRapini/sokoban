/*
** my_file_tomatrix.c for wireframe in /home/antonin.rapini/ModulesTek1/GraphicalProgramming/wireframe/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Dec  3 20:14:52 2016 Antonin Rapini
** Last update Mon Dec 19 18:44:38 2016 Antonin Rapini
*/

#include <stdlib.h>
#include <unistd.h>
#include "my_game.h"
#include "utils.h"

void my_createline(t_game *game, int j, int i, int old_i)
{
  if ((game->map[j] = malloc(sizeof(char) * (i - old_i + 1))) == NULL)
    exit(84);
  game->map[j][i - old_i] = '\0';
}

void	my_fillmap(char *file, t_game *game)
{
  int	i;
  int	old_i;
  int	j;
  int	k;

  j = 0;
  k = 0;
  old_i = 0;
  i = 0;
  while (file[i++])
    {
      if (file[i - 1] == '\n')
	{
	  k = 0;
	  my_createline(game, j, i, old_i);
	  while (old_i <= i - 1 && ++k)
	    {
	      game->map[j][k - 1] = file[old_i];
	      old_i++;
	    }
	  j++;
	}
    }
  my_getmapinfos(game);
}
