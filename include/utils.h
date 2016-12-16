/*
** utils.h for utils in /home/antonin.rapini/ProgElem/CPE_2016_Pushswap/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov 22 13:20:38 2016 Antonin Rapini
** Last update Fri Dec 16 16:50:13 2016 Antonin Rapini
*/

#ifndef UTILS_H_
# define UTILS_H_

#include "my_game.h"

int	my_strlen(char *);
int	my_nbrlen(int);
int	my_getnbr(char *);
void	my_putchar(char);
t_game	*my_getfileinfos(char *);
t_game	*my_file_togame(int, char *);
int	my_show_game(char **, int, int);
int	my_nbrlen(int);
char	*my_strdup(char *);
char	**my_strarraycpy(char **, int);

#endif /* !UTILS_H_ */
