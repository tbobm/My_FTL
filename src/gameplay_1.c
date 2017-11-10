#include "ftl.h"

/*
 * Attack current enemy
 */
int    attack(t_game *game) {
    if (game->sector->enemy == NULL) {
        my_putstr("No enemy"); /* TODO */
        return (0);
    }

    player_attack(game);
    
    if (enemy_is_alive(game)) {
        enemy_attack(game);
    }
    return (0);
}

/*
 * Switch to next sector
 */
int    jump(t_game *game) {
    my_putstr("JUMP\n"); /* TODO: REMOVE */
    if (game->sector->enemy != NULL) {
        my_putstr("Enemy is blocking the way\n");
        return (0);
    }
    if (game->sector != NULL) {
        free(game->sector);
        game->sector = NULL;
    }
    create_sector(game);
    return (0);
}

/*
 * Collect freight - detect command
 */
int     detect(t_game *game) {
    int i;

    i = 0;
    my_putstr("SCAN\n"); /* TODO: REMOVE */
    if (my_strcmp(game->ship->nav_tools->system_state, TXT_SYS_ON) == 0) {
        return (0);
    } else if (game->ship->nav_tools->has_scanned == OK) {
        return (0);
    } else {
        while (i++ < 10) {
            my_putstr("ADD A FREIGHT\n"); /* TODO: REMOVE */
            create_freight(game);
        }
    }
    return (0);
}

/*
 * Collect bonuses
 */
int     bonus(t_game *game) {
    my_putstr(game->ship->name);
    my_putstr("BONUS\n"); /* TODO: REMOVE */
    return (0);
}
