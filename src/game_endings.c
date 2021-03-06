/*
** game_endings.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:37:21 2017 Theo Massard
** Last update Fri Nov  10 21:37:21 2017 Theo Massard
*/

#include "ftl.h"

/*
 * Returns if hull points are > 0
 */
int     is_alive(t_game *game)
{
    return (game->ship->hull > 0);
}

/*
 * Checks if ship as positive energy
 */
int     has_energy(t_game *game)
{
    return (game->ship->ftl_drive->energy > 0);
}

/*
 * Winning condition management
 *
 * Checks if ship is at LAST_SECTOR, then displays final stats
 */
int     has_won(t_game *game)
{
    if (game->ship->nav_tools->sector == LAST_SECTOR) {
        my_putstr(WIN_TXT);
        display_stats(game->ship);
        return (KO);
    }
    return (OK);
}

/*
 * Checks if the player can continue to play
 *
 * requires the ship to:
 * - Have a hull > 0
 * - Have energy > 0
 * - Be at sector < 10
 */
int     can_continue(t_game *game)
{
    if (!is_alive(game)) {
        my_putstr("Your hull is crushed. You die floating in space.\n");
        return (KO);
    }

    if ((has_energy(game) == KO) && !(has_won(game) == KO)) {
        my_putstr("No more energy. You end up alone, starving.\n");
        return (KO);
    }

    return (has_won(game));
}
