#include "ftl.h"

void    ftl_drive_system_repair(t_ship *ship) {
    char    *str;

    free(ship->ftl_drive->system_state);
    my_putstr(REP_FTL_BEG);
    str = malloc(sizeof(char) * my_strlen(TXT_SYS_ON));
    if (str == NULL) {
        my_putstr(REP_FTL_ERR);
        return;
    }

    ship->ftl_drive->system_state = str;
    my_putstr(REP_FTL_OK);
}

void    navigation_tools_system_repair(t_ship *ship) {
    char    *str;

    free(ship->nav_tools->system_state);
    my_putstr(REP_NAV_BEG);
    str = malloc(sizeof(char) * my_strlen(TXT_SYS_ON));
    if (str == NULL) {
        my_putstr(REP_NAV_ERR);
        return;
    }

    ship->ftl_drive->system_state = str;
    my_putstr(REP_NAV_OK);
}

void    weapon_system_repair(t_ship *ship) {
    char    *str;

    free(ship->nav_tools->system_state);
    my_putstr(REP_WEAP_BEG);
    str = malloc(sizeof(char) * my_strlen(TXT_SYS_ON));
    if (str == NULL) {
        my_putstr(REP_WEAP_ERR);
        return;
    }

    ship->ftl_drive->system_state = str;
    my_putstr(REP_WEAP_OK);
}
