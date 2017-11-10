#include "ftl.h"

/*
 * Exit the game and display end screen
 */
int     game_exit(t_game *game) 
{
    display_stats(game->ship);
    my_putstr("Exiting the ship! Abort!!\n");
    return (1);
}

/*
 * Calls system_repair
 */
int     repair(t_game *game) 
{
    my_putstr("Preparing reparation interface...\n");
    system_repair(game->ship);
    return (0);
}

/*
 * Calls system_control
 */
int     control(t_game *game) 
{
    my_putstr("Activating control interface...\n");
    system_control(game->ship);
    my_putstr(game->ship->name);
    return (0);
}

/*
 * Displays stats
 */
int     stats(t_game *game) 
{
    my_putstr("Displaying ");
    my_putstr(game->ship->name);
    my_putstr(" stats...\n");
    display_stats(game->ship);
    return (0);
}


