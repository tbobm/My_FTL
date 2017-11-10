/*
** rand.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:29:29 2017 Theo Massard
** Last update Fri Nov  10 21:29:29 2017 Theo Massard
*/

#include "ftl.h"

int     generate_nbr(int min, int max)
{
    return ((random() % max) + min);
}

int     get_percent(int percentage)
{
    return (generate_nbr(0, 100) < percentage);
}

float   my_pow(float x, float n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (i++ < n) {
		x *= x;
	}
	return (x);
}
