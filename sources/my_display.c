/*
** my_display.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:05:57 2016 Antonin Rapini
** Last update Mon Dec 19 19:24:54 2016 Antonin Rapini
*/

#include <ncurses.h>
#include "my_game.h"
#include "utils.h"
#include <sources.h>
#include <gameplay.h>

void		my_checksize(t_game *game)
{
  static int	old_cols = 0;
  static int	old_lines = 0;

  if (old_cols != COLS || old_lines != LINES)
    {
      old_cols = COLS;
      old_lines = LINES;
      my_show_game(game->map, game->lines, game->columns);
    }
}

int my_getkeypress(t_game *game, int key)
{
  if (key == ' ')
    return (-1);
  return (move_player(game, key));
}

int	my_gameloop(t_game *game)
{
  int	playing;
  int	movestatus;

  movestatus = 0;
  playing = 1;
  my_show_game(game->map, game->lines, game->columns);
  while (playing)
    {
      movestatus = my_getkeypress(game, getch());
      if (movestatus == -1)
	return (1);
      else if (movestatus == 1)
	return (0);
      else if (movestatus == 2)
	my_show_game(game->map, game->lines, game->columns);
      my_checksize(game);
    }
  return (0);
}

int		my_display(t_game *game)
{
  t_game	*newgame;
  int		playing;

  playing = 1;
  newgame = my_copygame(game);
  initscr();
  noecho();
  keypad(stdscr, TRUE);
  while (playing)
    {
      if (my_gameloop(newgame) == 0)
	playing = 0;
      else
	{
	  my_freegame(newgame);
	  newgame = my_copygame(game);
	}
    }
  endwin();
  return (0);
}
