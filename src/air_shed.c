#include "ftl.h"

/*
 * Instantiates a ship
 *
 * ship has BASE_HULL hp
 *
 * return values:
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

    my_putstr(TXT_SHIP_OK);
    return (my_ship);
}

/*
 * Instantiates the ship's weapon
 * (Beware, non-UNIX behavior)
 *
 * weapon is set to BASE_DMG
 *
 * return values:
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
    return (1);
}
