#include "ftl.h"

/*
 * Frees everything ship-related
 */
void    free_ship(t_ship *ship) {
    free_weapon(ship->weapon);
    free_ftl_drive(ship->ftl_drive);
    free_nav_tools(ship->nav_tools);
    free_container(ship->container);
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

/*
 * Frees navigation tools
 */
void    free_nav_tools(t_navigation_tools *nav_tools) {
    free(nav_tools->system_state);
    free(nav_tools);
}

/*
 * Frees containers
 */
void    free_container(t_container *container) {
    free(container);
}

/*
 * Frees freight
 */
void    free_freight(t_freight *freight) {
    free(freight->item);
    free(freight);
}
