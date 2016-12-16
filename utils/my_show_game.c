
/*
** show_matrix.c for 102cypher in /home/antonin.rapini/MathematicalProgramming/102cipher/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Nov 25 10:31:50 2016 Antonin Rapini
** Last update Fri Dec 16 16:58:58 2016 Antonin Rapini
*/

#include "utils.h"
#include <ncurses.h>

int	my_show_game(char **map, int lines, int columns)
{
  int	i;

  i = 0;
  if (lines <= LINES && columns <= COLS)
    {
      while (i < lines)
	{
	  mvprintw((LINES / 2) + i - lines / 2, COLS / 2 - columns / 2, map[i]);
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
