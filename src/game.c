#include "ftl.h"

/*
 * Creates a game structure
 * Instatiantes ship and first sector
 * 
 * return:
 *  game
 *  NULL if something goes wrong while malloc'ing
 */
t_game  *create_game() {
    t_game  *game;

    game = malloc(sizeof(t_game));
    if (game == NULL) {
        return (NULL);
    }
    game->ship = create_ship();
    if (game->ship == NULL) {
        return (NULL);
    }
	add_weapon_to_ship(game->ship);
	add_ftl_drive_to_ship(game->ship);
	add_navigation_tools_to_ship(game->ship);
	add_container_to_ship(game->ship);
    game->kill_count = 0;
    game->sector = NULL;
    create_sector(game);
    return (game);
}

/*
 * Adds components to the ship
 *
 * return:
 *  ship
 *  NULL if anything fails
 */
t_ship  *setup_ship() {
    t_ship *ship;

    ship = create_ship();
    if (ship == NULL) {
        return (NULL);
    }
    add_weapon_to_ship(ship);
    add_ftl_drive_to_ship(ship);
    add_navigation_tools_to_ship(ship);
    add_container_to_ship(ship);
    ship->name = my_strdup(SHIP_NAME);
    return (ship);
}

/*
 * Main loop
 *
 * manage user input and leaving the game
 */
void     game_loop(t_game *game) {
    int player_exit;

    player_exit = KO;
    while ((can_continue(game) == OK) && (player_exit == KO)) {
        disp_prompt(game);
        player_exit = get_input(game);
    }
}

/*
 * Display prompt and some info
 *
 * (sector, energy)
 */
void    disp_prompt(t_game *game) {
    my_putstr("You're in sector ");
    my_putnbr(game->ship->nav_tools->sector);
    my_putstr(" and you have ");
    my_putnbr(game->ship->ftl_drive->energy);
    my_putstr(" energy left.\n");
    my_putstr("~~> ");
}
