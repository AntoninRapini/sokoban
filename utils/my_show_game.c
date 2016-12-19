
/*
** show_matrix.c for 102cypher in /home/antonin.rapini/MathematicalProgramming/102cipher/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 25 10:31:50 2016 Antonin Rapini
** Last update Mon Dec 19 16:16:14 2016 Antonin Rapini
*/

#include "utils.h"
#include <ncurses.h>

int	my_show_game(char **map, int lines, int columns)
{
  int	i;

  i = 0;
  if (columns){}
  if (lines <= LINES)
    {
      while (i < lines)
	{
	  mvprintw((LINES / 2) + i - lines / 2, COLS / 2, map[i]);
	  i++;
	}
      refresh();
      return (1);
    }
  else
    {
      mvprintw(LINES / 2 - 4, COLS / 2, "ENLARGE");
      refresh();
      return (0);
    }
}
