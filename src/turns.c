#include "ftl.h"

void    player_attack(t_game *game) {
    if (my_strcmp(game->ship->weapon->system_state, TXT_SYS_ON) != 0) {
        my_putstr("Could not attack\n");
        return ;
    }
    game->sector->enemy->hull -= game->ship->weapon->damage;
    my_putstr("Inflicted ");
    my_putnbr(game->ship->weapon->damage);
    my_putstr(" damage to the enemy\n");
}

int    enemy_is_alive(t_game *game) { /* TODO: Reverse me */
    if (game->sector->enemy->hull <= 0) {
        free(game->sector->enemy);
        game->sector->enemy = NULL;
        if (get_percent(50) == OK) {
            game->ship->ftl_drive->energy -= 1;
        }
        return (KO);
    }
    return (OK);
}

void    enemy_attack(t_game *game) {
    if (get_percent(game->ship->nav_tools->evade)) {
        my_putstr("Escape!\n");
        return ;
    }

    game->ship->hull -= game->sector->enemy->damage;
    /* TODO: shutdown systems */
}
