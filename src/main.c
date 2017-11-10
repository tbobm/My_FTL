/*
** main.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:34:28 2017 Theo Massard
** Last update Fri Nov  10 21:34:28 2017 Theo Massard
*/

#include "ftl.h"

int main(void) 
{
    t_game  *game;

    srandom(time(NULL));
    game = create_game();
    if (game == NULL) {
        return (1);
    }
    game_loop(game);
    free_game(game);
    return (0);
}
