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

int    enemy_is_alive(t_game *game) {
    if (game->sector->enemy->hull <= 0) {
        free(game->sector->enemy);
        game->sector->enemy = NULL;
    }
    return (game->sector->)
}
