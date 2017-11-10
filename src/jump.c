/*
** jump.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:39:08 2017 Theo Massard
** Last update Fri Nov  10 21:39:08 2017 Theo Massard
*/

#include "ftl.h"

void        create_enemy(t_game *game) 
{
    t_enemy *enemy;

    if (game->sector->enemy != NULL) {
        free(game->sector->enemy);
    }

    enemy = malloc(sizeof(t_enemy));
    if (enemy == NULL) {
        return ;
    }

    enemy->damage = BASE_DMG * my_pow(MULTIPLIER, game->kill_count);
    enemy->hull = BASE_E_HP * my_pow(MULTIPLIER, game->kill_count);
    game->sector->enemy = enemy;
}

void            create_sector(t_game *game) 
{
    t_sector    *sector;

    if (game->sector != NULL) {
        free(game->sector);
    }

    sector = malloc(sizeof(t_sector));
    if (sector == NULL) {
        return ;
    }

    game->ship->nav_tools->sector++;
    sector->lvl = game->ship->nav_tools->sector;
    sector->enemy = NULL;
    game->sector = sector;
    create_enemy(game);
}

