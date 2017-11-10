#include "ftl.h"

/*
 * Exit the game and display end screen
 */
int     game_exit(t_game *game) {
    display_stats(game->ship);
    my_putstr("EXIT!\n"); /* TODO: REMOVE */
    return (1);
}

/*
 * Calls system_repair
 */
int     repair(t_game *game) {
    system_repair(game->ship);
    my_putstr(game->ship->name);
    my_putstr("REPAIR\n"); /* TODO: REMOVE */
    return (0);
}

/*
 * Calls system_control
 */
int     control(t_game *game) {
    system_control(game->ship);
    my_putstr("CONTROL\n"); /* TODO: REMOVE */
    my_putstr(game->ship->name);
    return (0);
}

/*
 * Displays stats
 */
int     stats(t_game *game) {
    my_putstr("STATS\n"); /* TODO: REMOVE */
    display_stats(game->ship);
    return (0);
}
