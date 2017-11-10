#include "ftl.h"

int     generate_nbr(int min, int max) {
    return ((random() % (max - min)) + min);
}

int         get_percent(int percentage) {
    return (generate_nbr(0, 100) < percentage);
}
