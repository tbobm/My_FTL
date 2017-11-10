/*
** system_repair.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 12:56:23 2017 Theo Massard
** Last update Fri Nov  10 12:56:23 2017 Theo Massard
*/

#include "ftl.h"

static const t_repair_command g_repair_commands[] = {
    {"ftl_drive", ftl_drive_system_repair},
    {"nav_tools", navigation_tools_system_repair},
    {"weapon", weapon_system_repair},
    {NULL, NULL}
};

void    ftl_drive_system_repair(t_ship *ship)
{
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

void    navigation_tools_system_repair(t_ship *ship)
{
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

void    weapon_system_repair(t_ship *ship)
{
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

void    system_repair(t_ship *ship)
{
    char    *input;
    int     idx;
    int     command_found;

    my_putstr(PROMPT);
    if (!(input = my_readline())) {
        my_putstr(COMMAND_ERR);
        return;
    }
    idx = 0;
    command_found = 0;
    while (g_repair_commands[idx].command_name != NULL) {
        if (my_strcmp(g_repair_commands[idx].command_name, input) == 0) {
            g_repair_commands[idx].command(ship);
            command_found = OK;
        }
        idx++;
    }
    if (command_found != OK) {
        my_putstr(COMMAND_NOT_FOUND);
    }
    free(input);
}
