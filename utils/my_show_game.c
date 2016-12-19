/*
** show_matrix.c for 102cypher in /home/antonin.rapini/MathematicalProgramming/102cipher/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 25 10:31:50 2016 Antonin Rapini
** Last update Mon Dec 19 18:30:14 2016 Antonin Rapini
*/

#include <ncurses.h>
#include "utils.h"

int	my_show_game(char **map, int lines, int columns)
{
  int	i;

  i = 0;
  if (lines <= LINES && columns <= COLS)
    {
      clear();
      while (i < lines)
	{
	  mvprintw((LINES / 2) + i - lines / 2, COLS / 2 - columns, map[i]);
	  i++;
	}
      refresh();
      return (1);
    }
  else
    {
      clear();
      mvprintw(LINES / 2 - 4, COLS / 2, "ENLARGE");
      refresh();
      return (0);
    }
}
