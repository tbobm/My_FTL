#include "ftl.h"

t_ship  *create_ship() {
    t_ship *my_ship;

    my_ship = malloc(sizeof(t_ship));
    if (my_ship == NULL) {
        return KO;
    }
    my_ship->hull = 50;

    return (my_ship);
}
