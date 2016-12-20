/*
** sources.h for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:13:57 2016 Antonin Rapini
** Last update Tue Dec 20 14:05:48 2016 Antonin Rapini
*/

#ifndef GAMEPLAY_H_
# define GAMEPLAY_H_

#include "my_game.h"

int	move_player(t_game *, int);
int	my_canmove(t_game *, int, int, t_object);
int	my_isonstorage(t_object, t_object *, int);
int	my_checkwin(t_game *);
int	my_isboxhere(int, int, t_object *, int);
void	my_movebox(t_object *, int, int);
t_object *my_getbox(int, int, t_game *);

#endif /* !GAMEPLAY_H_ */
