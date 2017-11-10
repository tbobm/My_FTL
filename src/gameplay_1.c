#include "ftl.h"

/*
 * Attack current enemy
 */
int    attack(t_game *game) {
    if (game->sector->enemy == NULL) {
        my_putstr("No enemy"); /* TODO */
        return (0);
    }

    
    return (0);
}

/*
 * Switch to next sector
 */
int    jump(t_game *game) {
    my_putstr(game->ship->name);
    my_putstr("JUMP\n"); /* TODO: REMOVE */
    return (0);
}

/*
 * Collect freight
 */
int     scan(t_game *game) {
    my_putstr(game->ship->name);
    my_putstr("SCAN\n"); /* TODO: REMOVE */
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
