#include "ftl.h"

/*
static const t_input_commands g_input_commands[] = {
    {"attack", attack},
    {"detect", scan},
    {"jump", jump},
    {"getbonus", bonus},
    {"repair_system", repair},
    {"control_system", control},
    {"stat", stats},
    {"exit", game_exit}
};
*/

t_game  *create_game() {
    t_game  *game;

    game = malloc(sizeof(t_game));
    game->ship = create_ship();
    game->kill_count = 0;
    game->sector = 0;
    return (game);
}

t_ship  *setup_ship() {
    t_ship *ship;

    ship = create_ship();
    add_weapon_to_ship(ship);
    add_ftl_drive_to_ship(ship);
    add_navigation_tools_to_ship(ship);
    add_container_to_ship(ship);
    name_ship(ship);
    return (ship);
}
