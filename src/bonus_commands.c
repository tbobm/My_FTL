#include "ftl.h"

void    fun_attackbonus(t_ship *ship) {
    my_putstr("ATTACK BONUS ACQUIRED\n");
    ship->weapon->damage += BONUS_DMG;
}

void    fun_evadebonus(t_ship *ship) {
    my_putstr("EVADE BONUS ACQUIRED\n");
    ship->nav_tools->evade += BONUS_EVA;
}

void    fun_energy(t_ship *ship) {
    my_putstr("ENERGY BONUS ACQUIRED\n");
    ship->ftl_drive->energy += BONUS_ENG;
}

