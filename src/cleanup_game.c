/*
** cleanup_game.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:35:05 2017 Theo Massard
** Last update Fri Nov  10 21:35:05 2017 Theo Massard
*/

#include "ftl.h"

/*
 * Frees everything ship-related
 */
void    free_ship(t_ship *ship)
{
    free_weapon(ship->weapon);
    free_ftl_drive(ship->ftl_drive);
    free_nav_tools(ship->nav_tools);
    free(ship->name);
    free(ship);
}

/*
 * Frees the game
 */
void    free_game(t_game *game)
{
    free_ship(game->ship);
    free(game);
}
