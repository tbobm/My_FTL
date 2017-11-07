#include "ftl.h"

t_ship  *create_ship() {
    t_ship *my_ship;

    my_putstr("construction du vaisseau en cours...\n");
    my_ship = malloc(sizeof(t_ship));
    if (my_ship == NULL) {
        my_putstr(ERR_SHIP);
        return KO;
    }
    my_ship->hull = 50;

    my_putstr("amelioration du vaisseau termine!\n");
    return (my_ship);
}
