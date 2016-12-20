/*
** sources.h for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:13:57 2016 Antonin Rapini
** Last update Tue Dec 20 23:00:55 2016 Antonin Rapini
*/

#ifndef SOURCES_H_
# define SOURCES_H_

#include "my_game.h"

int		my_display(t_game *);
t_game		*my_creategame();
t_game		*my_copygame(t_game *);
void		my_freegame(t_game *);

#endif /* !SOURCES_H_ */
