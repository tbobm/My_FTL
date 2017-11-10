/*
** input.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:38:23 2017 Theo Massard
** Last update Fri Nov  10 21:38:23 2017 Theo Massard
*/

#include "ftl.h"

static const t_input_commands g_input_commands[] = 
{
    {"attack", attack},
    {"detect", detect},
    {"jump", jump},
    {"getbonus", bonus},
    {"repair_system", repair},
    {"control_system", control},
    {"stat", stats},
    {"exit", game_exit},
    {NULL, NULL}
};


int         get_input(t_game *game) 
{
    char    *input;
    int     i;

    i = 0;
    input = my_readline();
    if (input == NULL) {
        my_putstr("Missing command\n");
        return (OK);
    }

    while (g_input_commands[i].name != NULL) {
        if (my_strcmp(g_input_commands[i].name, input) == 0) {
            return (g_input_commands[i].command(game));
        }
        i++;
    }
    my_putstr("Unknown command.\n");
    return (KO);
}
