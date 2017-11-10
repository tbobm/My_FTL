#include "ftl.h"

int     is_alive(t_game *game) {
    return (game->ship->hull > 0);
}

int     has_energy(t_game *game) { /* TODO: Check freights */
    return (game->ship->ftl_drive->energy > 0);
}

int     has_won(t_game *game) {
    if (game->ship->nav_tools->sector == LAST_SECTOR) {
        my_putstr(WIN_TXT);
        display_stats(game->ship);
        return (OK);
    }
    return (KO);
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

    if ((has_energy(game) == KO) && !(has_won(game) == KO)) { 
        return (KO);
    }
    return (has_won(game));
}
