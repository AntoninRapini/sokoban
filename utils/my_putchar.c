/*
** my_putchar.c for bsq in /home/antonin.rapini/ModulesTek1/ProgElem/CPE_2016_BSQ/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Dec 13 13:21:08 2016 Antonin Rapini
** Last update Tue Dec 13 13:21:29 2016 Antonin Rapini
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
