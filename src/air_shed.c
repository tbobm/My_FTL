#include "ftl.h"

/*
 * Instantiates a ship
 *
 * ship has BASE_HULL hp
 *
 * return:
 *  NULL: Could not allocate memory
 *  t_ship*: the allocated ship
 */
t_ship  *create_ship() {
    t_ship *my_ship;

    my_putstr(TXT_SHIP_BEGIN);
    my_ship = malloc(sizeof(t_ship));
    if (my_ship == NULL) {
        my_putstr(TXT_ERR_SHIP);
        return (KO);
    }
    my_ship->hull = BASE_HULL;
    my_ship->weapon = NULL;
    my_ship->ftl_drive = NULL;

    my_putstr(TXT_SHIP_OK);
    return (my_ship);
}

/*
 * Instantiates the ship's weapon
 * (Beware, non-UNIX behavior)
 *
 * weapon is set to BASE_DMG
 *
 * return:
 *  0: Error
 *  1: OK
 */
int     add_weapon_to_ship(t_ship *ship) {
    ship->weapon = malloc(sizeof(t_weapon));

    my_putstr(TXT_WEAP_BEGIN);
    if (ship->weapon == NULL) {
        my_putstr(TXT_WEAP_ERR);
        return (0);
    }

    my_putstr(TXT_WEAP_OK);
    ship->weapon->damage = BASE_DMG;
    ship->weapon->system_state = my_strdup(TXT_SYS_ON);
    return (1);
}

/*
 * Instantiates the ship's ftl drive
 * (Beware, non-UNIX behavior)
 *
 * energy is set to BASE_ENG
 *
 * return:
 *  0: Error
 *  1: OK
 */
int     add_ftl_drive_to_ship(t_ship *ship) {
    ship->ftl_drive = malloc(sizeof(t_ftl_drive));

    my_putstr(TXT_FTL_BEGIN);
    if (ship->ftl_drive == NULL) {
        my_putstr(TXT_FTL_ERR);
        return (0);
    }

    my_putstr(TXT_FTL_OK);
    ship->ftl_drive->energy = BASE_ENG;
    ship->ftl_drive->system_state = my_strdup(TXT_SYS_ON);
    return (1);
}

