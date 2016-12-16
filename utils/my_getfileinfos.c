/*
** my_getfileinfos.c for wireframe in /home/antonin.rapini/ModulesTek1/GraphicalProgramming/wireframe/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sat Dec  3 20:21:08 2016 Antonin Rapini
** Last update Tue Dec 13 22:52:31 2016 Antonin Rapini
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "sources.h"
#include "my_game.h"
#include "utils.h"
#include <stdio.h>

int	my_get_linecount(int fd)
{
  int	size;
  int	lines;
  char	buffer[1024];
  int	i;

  lines = 0;
  size = 1;
  while (size > 0)
    {
      i = 0;
      size = read(fd, buffer, 1023);
      buffer[size] = '\0';
      while (buffer[i])
	{
	  if (buffer[i] == '\n')
	    lines++;
	  i++;
	}
    }
  return (lines);
}

t_game	*my_getfileinfos(char *file)
{
  int		fd;
  int		lines;

  if ((fd = open(file, O_RDONLY)) == -1)
    return (NULL);
  lines = my_get_linecount(fd);
  close(fd);
  if (lines == 0)
    return (NULL);
  return (my_file_togame(lines, file));
}
