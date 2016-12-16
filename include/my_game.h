/*
** my_matrix.h for wireframe in /home/antonin.rapini/ModulesTek1/GraphicalProgramming/wireframe/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sun Dec  4 22:28:56 2016 Antonin Rapini
** Last update Fri Dec 16 15:12:15 2016 Antonin Rapini
*/

#ifndef MY_GAME_H_
# define MY_GAME_H_

#include <SFML/Graphics/RenderWindow.h>

typedef struct	s_object
{
  int		y;
  int		x;
}		t_object;

typedef struct	s_game
{
  char		**map;
  int		lines;
  int		columns;
  t_object	player;
  t_object	*boxes;
  t_object	*storage;
  int		boxcount;
  int		storagecount;
  int		boxesplaced;
}		t_game;

#endif /* !MY_GAME_H_ */
