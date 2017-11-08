#include "ftl.h"

/*
 * Frees everything ship-related
 */
void    free_ship(t_ship *ship) {
    free_weapon(ship->weapon);
    free_ftl_drive(ship->ftl_drive);
    free(ship);
}

/*
 * Frees weapon
 */
void    free_weapon(t_weapon *weapon) {
    free(weapon->system_state);
    free(weapon);
}

/*
 * Frees ftl_drive
 */
void    free_ftl_drive(t_ftl_drive *ftl_drive) {
    free(ftl_drive->system_state);
    free(ftl_drive);
}
