#include "ftl.h"

void    ftl_drive_system_repair(t_ship *ship) {
    ship->ftl_drive->system_state = my_strdup(TXT_SYS_ON);
}

void    navigation_tools_system_repair(t_ship *ship) {
    ship->nav_tools->system_state = my_strdup(TXT_SYS_ON);
}

void    weapon_system_repair(t_ship *ship) {
    ship->weapon->system_state = my_strdup(TXT_SYS_ON);
}
