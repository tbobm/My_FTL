/*
** stats.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 20:06:28 2017 Theo Massard
** Last update Fri Nov  10 20:06:28 2017 Theo Massard
*/

#include "ftl.h"

void    display_evade(t_ship *ship)
{
    my_putstr("Evade: ");
    my_putnbr(ship->nav_tools->evade);
    my_putchar('\n');
}

void    display_hull(t_ship *ship)
{
    my_putstr("Hull: ");
    my_putnbr(ship->hull);
    my_putchar('\n');
}

void    display_damage(t_ship *ship)
{
    my_putstr("Damages: ");
    my_putnbr(ship->weapon->damage);
    my_putchar('\n');
}

void    display_energy(t_ship *ship)
{
    my_putstr("Energy: ");
    my_putnbr(ship->ftl_drive->energy);
    my_putchar('\n');
}

void    display_stats(t_ship *ship)
{
    display_damage(ship);
    display_energy(ship);
    display_evade(ship);
    display_hull(ship);
}
