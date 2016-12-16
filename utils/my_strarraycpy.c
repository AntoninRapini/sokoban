/*
** my_strarraycpy.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Dec 16 16:25:20 2016 Antonin Rapini
** Last update Fri Dec 16 16:45:48 2016 Antonin Rapini
*/

#include <stdlib.h>
#include "utils.h"

char	**my_strarraycpy(char **map, int lines)
{
  char	**newmap;
  int	i;

  if ((newmap = malloc(sizeof(char *) * lines)) == NULL)
    exit(84);
  i = 0;
  while (i < lines)
    {
      newmap[i] = my_strdup(map[i]);
      i++;
    }
  return (newmap);
}
