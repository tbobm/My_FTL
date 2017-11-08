#include <stdio.h>
#include <stdlib.h>
#include "ftl.h"

int main(void) {
    t_ship *ship;

    ship = create_ship();
    add_weapon_to_ship(ship);
    free(ship);
    return (0);
}
