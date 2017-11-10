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
            freight->item = my_strdup("evade");
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
