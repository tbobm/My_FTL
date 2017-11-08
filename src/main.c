#include <stdio.h>
#include <stdlib.h>
#include "ftl.h"

int main(void) {
    t_ship *ship;

    ship = create_ship();
    add_weapon_to_ship(ship);
    add_ftl_drive_to_ship(ship);
    add_navigation_tools_to_ship(ship);
    free_ship(ship);
    return (0);
}
