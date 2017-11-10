#include "ftl.h"

void    display_evade(t_ship *ship) {
    my_putstr("Evade: ");
    my_putnbr(ship->nav_tools->evade);
}

void    display_hull(t_ship *ship) {
    my_putstr("Hull: ");
    my_putnbr(ship->hull);
    my_putchar('\n');
}

void    display_damage(t_ship *ship) {
    my_putstr("Damages: ");
    my_putnbr(ship->weapon->damage);
    my_putchar('\n');
}

void    display_energy(t_ship *ship) {
    my_putstr("Energy: ");
    my_putnbr(ship->ftl_drive->energy);
    my_putchar('\n');
}

void    display_stats(t_ship *ship) {
    display_damage(ship);
    display_energy(ship);
    display_evade(ship);
    display_hull(ship);
}
