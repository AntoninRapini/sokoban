/*
** my_movebox.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/gameplay
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 20 13:48:00 2016 Antonin Rapini
** Last update Tue Dec 20 14:05:58 2016 Antonin Rapini
*/

#include "my_game.h"

void my_movebox(t_object *box, int newx, int newy)
{
  box->x = newx;
  box->y = newy;
}
