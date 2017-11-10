/*
** air_shed.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:34:47 2017 Theo Massard
** Last update Fri Nov  10 21:34:47 2017 Theo Massard
*/

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
t_ship  *create_ship() 
{
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
    my_ship->nav_tools = NULL;
    my_ship->container = NULL;
    my_ship->name = my_strdup(SHIP_NAME);
    my_putstr(TXT_SHIP_OK);
    my_putstr("[ANNOUNCEMENT] Welcome aboard the ");
    my_putstr(my_ship->name);
    my_putstr(" Captain.\n");
    return (my_ship);
}

/*
 * Instantiates the ship's weapon
 * (Beware, non-UNIX behavior)
 *
 * weapon is set to BASE_DMG
 * system_state is set to TXT_SYS_ON
 *
 * return:
 *  KO: 0
 *  OK: 1
 */
int     add_weapon_to_ship(t_ship *ship) 
{
    ship->weapon = malloc(sizeof(t_weapon));

    my_putstr(TXT_WEAP_BEGIN);
    if (ship->weapon == NULL) {
        my_putstr(TXT_WEAP_ERR);
        return (KO);
    }

    my_putstr(TXT_WEAP_OK);
    ship->weapon->damage = BASE_DMG;
    ship->weapon->system_state = my_strdup(TXT_SYS_ON);
    return (OK);
}

/*
 * Instantiates the ship's ftl drive
 * (Beware, non-UNIX behavior)
 *
 * energy is set to BASE_ENG
 * system_state is set to TXT_SYS_ON
 *
 * return:
 *  KO: 0
 *  OK: 1
 */
int     add_ftl_drive_to_ship(t_ship *ship) 
{
    ship->ftl_drive = malloc(sizeof(t_ftl_drive));

    my_putstr(TXT_FTL_BEGIN);
    if (ship->ftl_drive == NULL) {
        my_putstr(TXT_FTL_ERR);
        return (KO);
    }

    my_putstr(TXT_FTL_OK);
    ship->ftl_drive->energy = BASE_ENG;
    ship->ftl_drive->system_state = my_strdup(TXT_SYS_ON);
    return (OK);
}

/*
 * Instantiates the ship's navigation tools
 * (Beware, non-UNIX behavior)
 *
 * evade  is set to BASE_EVA
 * sector is set to BASE_SEC
 * system_state is set to TXT_SYS_ON
 *
 * return:
 *  KO: 0
 *  OK: 1
 */
int     add_navigation_tools_to_ship(t_ship *ship) 
{
    ship->nav_tools = malloc(sizeof(t_navigation_tools));

    my_putstr(TXT_NAV_BEGIN);
    if (ship->nav_tools == NULL) {
        my_putstr(TXT_NAV_ERR);
        return (KO);
    }

    my_putstr(TXT_NAV_OK);
    ship->nav_tools->sector = BASE_SEC;
    ship->nav_tools->evade = BASE_EVA;
    ship->nav_tools->system_state = my_strdup(TXT_SYS_ON);
    ship->nav_tools->has_scanned = KO;
    return (OK);
}
