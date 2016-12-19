/*
** my_display.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:05:57 2016 Antonin Rapini
** Last update Mon Dec 19 18:42:56 2016 Antonin Rapini
*/

#include <ncurses.h>
#include "my_game.h"
#include "utils.h"
#include <sources.h>
#include <gameplay.h>

int	my_gameloop(t_game *game)
{
  int	playing;
  int	key;
  int	movestatus;

  movestatus = 0;
  key = 0;
  playing = 1;
  my_show_game(game->map, game->lines, game->columns);
  while (playing)
    {
      key = getch();
      if (key == ' ')
	return (1);
      movestatus = move_player(game,key);
      if (movestatus == 1)
	{
	  endwin();
	  playing = 0;
	}
      else if (movestatus == 2)
	my_show_game(game->map, game->lines, game->columns);
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
  return (0);
}
