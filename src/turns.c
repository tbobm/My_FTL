/*
** turns.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 19:36:22 2017 Theo Massard
** Last update Fri Nov  10 19:36:22 2017 Theo Massard
*/

#include "ftl.h"

void    player_attack(t_game *game)
{
    if (my_strcmp(game->ship->weapon->system_state, TXT_SYS_ON) != 0) {
        my_putstr("Could not attack\n");
        return ;
    }
    game->sector->enemy->hull -= game->ship->weapon->damage;
    my_putstr("Inflicted ");
    my_putnbr(game->ship->weapon->damage);
    my_putstr(" damage to the enemy\n");
    if (game->sector->enemy->hull > 0) {
        my_putstr("Ennemy has ");
        my_putnbr(game->sector->enemy->hull);
        my_putstr(" hp left\n");
        game->kill_count++;
    } else {
        my_putstr("Enemy died.\n");
    }
}

int    enemy_is_alive(t_game *game)
{ /* TODO: Reverse me */
    if (game->sector->enemy->hull <= 0) {
        free(game->sector->enemy);
        game->sector->enemy = NULL;
        if (get_percent(50) == OK) {
            game->ship->ftl_drive->energy -= 1;
        }
        return (KO);
    }
    return (OK);
}

void    enemy_attack(t_game *game)
{
    if (get_percent(game->ship->nav_tools->evade)) {
        my_putstr("Escape!\n");
        return ;
    }

    game->ship->hull -= game->sector->enemy->damage;
    my_putstr("Enemy hit you with ");
    my_putnbr(game->sector->enemy->damage);
    my_putstr(" damage.\n");
    if (game->ship->hull > 0) {
        my_putstr("You still have ");
        my_putnbr(game->ship->hull);
        my_putstr(" hp left.\n");
    }
}
