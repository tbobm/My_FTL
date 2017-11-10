#include "ftl.h"

int     generate_nbr(int min, int max) {
    return ((random() % (max - min)) + min);
}

int     get_percent(int percentage) {
    return (generate_nbr(0, 100) < percentage);
}

float   my_pow(float x, float n) {
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (i++ < n) {
		x *= x;
	}
	return (x);
}
