/*
** my_file_tomatrix.c for wireframe in /home/antonin.rapini/ModulesTek1/GraphicalProgramming/wireframe/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Dec  3 20:14:52 2016 Antonin Rapini
** Last update Mon Dec 19 16:33:31 2016 Antonin Rapini
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "utils.h"
#include "my_game.h"
#include "sources.h"

void	my_storemapinfos(t_game *game, int bi, int si)
{
  int	i;
  int	j;

  i = 0;
  if ((game->boxes = malloc(sizeof(t_object) * game->boxcount)) == NULL)
    exit(84);
  if ((game->storage = malloc(sizeof(t_object) * game->storagecount)) == NULL)
    exit(84);
  while (i++ < game->lines)
    {
      j = 0;
      while (game->map[i - 1][j++])
	if (game->map[i - 1][j - 1] == 'X' && bi < game->boxcount)
	  {
	    game->boxes[bi].y = i - 1;
	    game->boxes[bi].x = j - 1;
	    bi++;
	  }
	else if (game->map[i - 1][j - 1] == 'O' && bi < game->storagecount)
	  {
	    game->storage[si].y = i - 1;
	    game->storage[si].x = j - 1;
	    si++;
	  }
    }
}

void	my_getmapinfos(t_game *game)
{
  int	i;
  int	j;

  i = 0;
  while (i < game->lines)
    {
      j = 0;
      while (game->map[i][j])
	{
	  if (game->map[i][j] == 'P')
	    {
	      game->player.x = j;
	      game->player.y = i;
	    }
	  else if (game->map[i][j] == 'X')
	    game->storagecount++;
	  else if (game->map[i][j] == 'O')
	    game->boxcount++;
	  j++;
	}
      i++;
    }
  my_storemapinfos(game, 0, 0);
}

void		my_fillmap(char *file, t_game *game)
{
  int		i;
  int		old_i;
  int		j;
  int		k;

  j = 0;
  k = 0;
  old_i = 0;
  i = 0;
  while (file[i])
    {
      if (file[i] == '\n')
	{
	  k = 0;
	  game->map[j] = malloc(sizeof(char) * (i + 1 - old_i + 1));
	  game->map[j][i + 1- old_i] = '\0';
	  while (old_i <= i)
	    {
	      game->map[j][k] = file[old_i];
	      old_i++;
	      k++;
	    }
	  j++;
	  
	}
      i++;
    }
  my_getmapinfos(game);
}

t_game		*my_file_togame(int lines, char *filename, int filesize)
{
  int		fd;
  t_game	*game;
  char		*buffer;

  buffer = malloc(sizeof(char) * filesize + 1);
  if ((game = my_creategame()) == NULL)
    return (NULL);
  if ((game->map = malloc(sizeof(char *) * lines)) == NULL)
    return (NULL);
  fd = open(filename, O_RDONLY);
  read(fd, buffer, filesize);
  buffer[filesize] = '\0';
  game->lines = lines;
  my_fillmap(buffer, game);
  return (game);
}
