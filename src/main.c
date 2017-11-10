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
