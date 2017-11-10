#include "ftl.h"

t_game  *create_game() {
    t_game  *game;

    game = malloc(sizeof(t_game));
    game->ship = create_ship();
	add_weapon_to_ship(game->ship);
	add_ftl_drive_to_ship(game->ship);
	add_navigation_tools_to_ship(game->ship);
	add_container_to_ship(game->ship);
    game->kill_count = 0;
    create_sector(game);
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

void     game_loop(t_game *game) {
    int player_exit;

    player_exit = KO;
    while ((can_continue(game) == OK) && (player_exit == KO)) {
        my_putstr("~~>");
        player_exit = get_input(game);
    }
}

void    disp_prompt(t_game *game) {
    my_putstr("You're in sector ");
    my_putnbr(game->ship->nav_tools->sector);
    my_putstr(" and you have ");
    my_putnbr(game->ship->ftl_drive->energy);
    my_putstr(" energy left.");
}
