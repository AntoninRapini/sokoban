/*
** sources.h for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:13:57 2016 Antonin Rapini
** Last update Fri Dec 16 00:13:45 2016 Antonin Rapini
*/

#ifndef GAMEPLAY_H_
# define GAMEPLAY_H_

#include "my_game.h"

void	move_player(t_game *, int, int);
int	my_canmove(char **, int, int, t_object);
int	my_isonstorage(t_object, t_object *, int);
#endif /* !GAMEPLAY_H_ */
