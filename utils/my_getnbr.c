/*
** my_getnbr.c for my_getnbr in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_printf/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Sun Nov 20 00:36:16 2016 Antonin Rapini
** Last update Tue Dec 13 15:23:27 2016 Antonin Rapini
*/

int	my_getnbr_rec(char *str, int nbr, int sign)
{
  if (*str == '-')
    return (my_getnbr_rec(str + 1, nbr, -sign));
  else if (*str >= '0' && *str <= '9')
    return (my_getnbr_rec(str + 1, (nbr * 10) + (*str - 48), sign));
  else
    return (nbr * sign);
}

int	my_getnbr(char *str)
{
  return (my_getnbr_rec(str, 0, 1));
}
