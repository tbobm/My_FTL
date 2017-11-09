#include "ftl.h"

void    ftl_drive_check(t_ship *ship) {
    if (my_strcmp(ship->ftl_drive->system_state, TXT_SYS_ON) == 0) {
        my_putstr(CHK_FTL_OK);
    }
}

void    navigation_tools_system_check(t_ship *ship) {
    if (my_strcmp(ship->nav_tools->system_state, TXT_SYS_ON) == 0) {
        my_putstr(CHK_NAV_OK);
    }
}

void    weapon_system_check(t_ship *ship) {
    if (my_strcmp(ship->weapon->system_state, TXT_SYS_ON) == 0) {
        my_putstr(CHK_WEAP_OK);
    }
}

void    system_control(t_ship *ship) {
    ftl_drive_check(ship);
    navigation_tools_system_check(ship);
    weapon_system_check(ship);
}
