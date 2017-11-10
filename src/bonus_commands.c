/*
** bonus_commands.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:34:57 2017 Theo Massard
** Last update Fri Nov  10 21:34:57 2017 Theo Massard
*/

#include "ftl.h"

void    fun_attackbonus(t_ship *ship)
{
    my_putstr("[LOOT] Attack bonus acquired\n");
    ship->weapon->damage += BONUS_DMG;
}

void    fun_evadebonus(t_ship *ship)
{
    my_putstr("[LOOT] Evade bonus acquired\n");
    ship->nav_tools->evade += BONUS_EVA;
}

void    fun_energy(t_ship *ship)
{
    my_putstr("[LOOT] Energy bonus acquired\n");
    ship->ftl_drive->energy += BONUS_ENG;
}

