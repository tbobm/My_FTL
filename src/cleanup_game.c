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
