/*
** sources.h for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:13:57 2016 Antonin Rapini
** Last update Thu Dec 15 23:33:36 2016 Antonin Rapini
*/

#ifndef SOURCES_H_
# define SOURCES_H_

#include "my_game.h"

void	my_display(t_game *);
void	move_player(t_game *, int, int);
t_game	*my_creategame();
#endif /* !SOURCES_H_ */
