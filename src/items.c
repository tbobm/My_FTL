/*
** items.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 22:37:04 2017 Theo Massard
** Last update Fri Nov  10 22:37:04 2017 Theo Massard
*/

#include "ftl.h"

void            create_freight(t_game *game)
{
    t_freight   *freight;
    int         res;

    freight = malloc(sizeof(t_freight));
    if (freight == NULL) {
        my_putstr("Could not create freight.\n");
        return ;
    }
    res = generate_nbr(0, 100);
    if (get_percent(30)) {
        if (res < 33) {
            freight->item = my_strdup("energy");
        } else if (res < 66) {
            freight->item = my_strdup("evadebonus");
        } else if (res < 99) {
            freight->item = my_strdup("attackbonus");
        } else {
            freight->item = my_strdup("scrap");
        }
    } else {
        freight->item = my_strdup("scrap");
    }
    add_freight_to_container(game->ship, freight);
}
