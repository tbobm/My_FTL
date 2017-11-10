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

