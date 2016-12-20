/*
** my_objarrcpy.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 20 16:01:32 2016 Antonin Rapini
** Last update Tue Dec 20 16:13:34 2016 Antonin Rapini
*/

#include <stdlib.h>
#include "my_game.h"

t_object	*my_objarrcpy(t_object *arr, int size)
{
  int		i;
  t_object	*new_arr;

  i = 0;
  if ((new_arr = malloc(sizeof(t_object) * size)) == NULL)
    exit(84);
  while (i < size)
    {
      new_arr[i].x = arr[i].x;
      new_arr[i].y = arr[i].y;
      i++;
    }
  return (new_arr);
}
