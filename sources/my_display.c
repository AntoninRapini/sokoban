/*
** my_display.c for my_sokoban in /home/antonin.rapini/ModulesTek1/UnixSystemProgrammation/PSU_2016_my_sokoban/sources
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 17:05:57 2016 Antonin Rapini
** Last update Fri Dec 16 00:05:35 2016 Antonin Rapini
*/

#include <ncurses.h>
#include "my_game.h"
#include "utils.h"
#include <stdio.h>
#include <sources.h>
#include <gameplay.h>

void my_display(t_game *game)
{
  int playing;
  int key;

  key = 0;
  playing = 1;
  initscr();
  keypad(stdscr, TRUE);
  while (playing)
    {
      my_show_game(game->map, game->lines, game->columns);
      key = getch();
      move_player(game, (key == KEY_DOWN) - (key == KEY_UP)
		  , (key == KEY_RIGHT) - (key == KEY_LEFT));
    }
  endwin();
}
