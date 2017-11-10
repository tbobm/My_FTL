#include "ftl.h"

int     is_alive(t_game *game) {
    return (game->ship->hull > 0);
}

int     has_energy(t_game *game) {
    return (game->ship->ftl_drive->energy > 0);
}

int     is_at_last_sector(t_game *game) {
    return (game->sector->lvl == 0);
}

int     has_won(t_game *game) {
    return (game->sector->lvl == LAST_SECTOR);
}

/*
 * Checks if the player can continue to play
 *
 * requires the ship to:
 * - Have a hull > 0
 * - Have energy > 0
 * - Be at sector < 10
 */
int     can_continue(t_game *game) {
    if (!is_alive(game)) {
        return (KO);
    }

    if ((has_energy(game) == KO) && !(is_at_last_sector(game) == KO)) { 
        return (KO);
    }

    if (has_won(game) == OK) {
        my_putstr(WIN_TXT);
        display_stats(game->ship);
        return (KO);
    }
    return (OK);
}
