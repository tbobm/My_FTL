/*
** gameplay_1.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 22:53:06 2017 Theo Massard
** Last update Fri Nov  10 22:53:06 2017 Theo Massard
*/

#include "ftl.h"

/*
 * Attack the enemy if possible,
 * then manage the enemy's attack
 */
int    attack(t_game *game) 
{
    if (game->sector->enemy == NULL) {
        my_putstr("No enemy\n");
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
int    jump(t_game *game) 
{
    my_putstr("You try to jump...\n");
    if (game->sector->enemy != NULL) {
        my_putstr("But an enemy is blocking the way\n");
        return (0);
    }
    if (game->sector != NULL) {
        free(game->sector);
        game->sector = NULL;
    }
    create_sector(game);
    my_putstr("You arrive at sector ");
    my_putnbr(game->ship->nav_tools->sector);
    my_putstr(" Captain.\n");
    return (0);
}

/*
 * Collect freight - detect command
 */
int     detect(t_game *game) 
{
    int i;

    i = 0;
    my_putstr("Scanning the surroundings...\n");
    if (my_strcmp(game->ship->nav_tools->system_state, TXT_SYS_ON) != 0) {
        my_putstr("Unable to scan.\n");
        return (0);
    } else if (game->ship->nav_tools->has_scanned == OK) {
        my_putstr("Already scanned the area. There is nothing to be found...\n");
        return (0);
    } else {
        while (i++ < 10) {
            create_freight(game);
            my_putstr("Found a freight\n");
        }
    }
    return (0);
}

/*
 * Collect bonuses
 */
int     bonus(t_game *game) 
{
    my_putstr("Collecting freights...\n"); /* TODO: REMOVE */
    get_bonus(game->ship);
    return (0);
}
