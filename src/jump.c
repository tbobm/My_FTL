#include "ftl.h"

void    create_enemy(t_game *game) {
    t_enemy *enemy;

    if (game->sector->enemy != NULL) {
        free(game->sector->enemy);
    }
    enemy = malloc(sizeof(t_enemy));
    if (enemy == NULL) {
        return ;
    }

    enemy->damage = BASE_DMG * my_pow(MULTIPLIER, game->kill_count);
    enemy->hull = BASE_E_HP * my_pow(MULTIPLIER, game->kill_count);
    game->sector->enemy = enemy;
}

void    create_sector(t_game *game) {
    t_sector    *sector;

    if (game->sector != NULL) {
        free(game->sector);
    }

    sector = malloc(sizeof(t_sector));
    if (sector == NULL) {
        return ;
    }

    sector->lvl = game->ship->nav_tools->sector + 1;
    create_enemy(game);
}

