/*
** my_display_nbrs.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 10:06:58 2017 Theo Massard
** Last update Fri Nov  10 10:06:58 2017 Theo Massard
*/

#include "ftl.h"

void	my_putnbr(int nb)
{
	if (nb == MIN_INT)
		my_putstr(STR_MIN_INT);
	else
	{
		if (nb < 0)
		{
			my_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			my_putnbr(nb / 10);
			my_putnbr(nb % 10);
		}
		else
			my_putchar(nb + '0');
	}
}

