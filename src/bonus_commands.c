#include "ftl.h"

void    fun_attackbonus(t_ship *ship) {
    my_putstr("[LOOT] Attack bonus acquired\n");
    ship->weapon->damage += BONUS_DMG;
}

void    fun_evadebonus(t_ship *ship) {
    my_putstr("[LOOT] Evade bonus acquired\n");
    ship->nav_tools->evade += BONUS_EVA;
}

void    fun_energy(t_ship *ship) {
    my_putstr("[LOOT] Energy bonus acquired\n");
    ship->ftl_drive->energy += BONUS_ENG;
}

