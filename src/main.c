#include <stdio.h>
#include <stdlib.h>
#include "ftl.h"

/*
int main(void) {
    t_ship *ship;
    // t_freight * freight;

    ship = create_ship();
    add_weapon_to_ship(ship);
    add_ftl_drive_to_ship(ship);
    add_navigation_tools_to_ship(ship);
    add_container_to_ship(ship);

    free_ship(ship);
    return (0);
}
*/

/*
int main() {
	t_ship* ship = NULL;

	// INIT
	printf("%s", "----------CREATE_SHIP\n");
	ship = create_ship();
	add_weapon_to_ship(ship);
	add_ftl_drive_to_ship(ship);
	add_navigation_tools_to_ship(ship);
	add_container_to_ship(ship);

	printf("%s", "----------ADD_ITEM\n");

	// ADD ITEM 1
	t_freight *freight = NULL;
	freight = malloc(sizeof(t_freight));
	freight->item = my_strdup("energy");
	freight->next = NULL;
	freight->prev = NULL;
	add_freight_to_container(ship, freight);

	printf("%s\n", ship->container->first->item);
	printf("%s\n", ship->container->last->item);
	printf("%d\n", ship->container->nb_elem);

	printf("%s", "-----------ADD_ITEM_2\n");

	// ADD ITEM 2
	t_freight *freight2 = NULL;
	freight2 = malloc(sizeof(t_freight));
	freight2->item = my_strdup("attackbonus");
	freight2->next = NULL;
	freight2->prev = NULL;
	add_freight_to_container(ship, freight2);

	printf("%s\n", ship->container->first->item);
	printf("%s\n", ship->container->last->item);
	printf("%d\n", ship->container->nb_elem);

	printf("%s", "-----------ADD_ITEM_3\n");

	// ADD ITEM 3
	t_freight *freight3 = NULL;
	freight3 = malloc(sizeof(t_freight));
	freight3->item = my_strdup("evadebonus");
	freight3->next = NULL;
	freight3->prev = NULL;
	add_freight_to_container(ship, freight3);
    printf("%d\n", ship->nav_tools->evade);
    get_bonus(ship);
    printf("%d\n", ship->nav_tools->evade);

	printf("%s\n", ship->container->first->item);
	printf("%s\n", ship->container->last->item);
	printf("%d\n", ship->container->nb_elem);

	printf("%s", "-----------LIST_NEXT\n");

	// TEST LISTE NEXT
	t_freight *current = ship->container->first;
	while(current != NULL) {
		printf("%s\n", current->item);
		current = current->next;
	}

	printf("%s", "-----------LIST_PREV\n");

	// TEST LISTE PREV
	t_freight *current2 = ship->container->last;
	while(current2 != NULL) {
		printf("%s\n", current2->item);
		current2 = current2->prev;
	}

	printf("%s", "-----------DEL_ITEM_2\n");

	// TEST DELETE ITEM 2
	del_freight_from_container(ship, freight2);

	t_freight *current3 = ship->container->first;
	while(current3 != NULL) {
		printf("%s\n", current3->item);
		current3 = current3->next;
	}
	printf("%s\n", ship->container->first->item);
	printf("%s\n", ship->container->last->item);
	printf("%d\n", ship->container->nb_elem);

	printf("%s", "-----------DEL_ITEM_3\n");
	// TEST DELETE ITEM 3
	del_freight_from_container(ship, freight3);

	t_freight *current4 = ship->container->first;
	while(current4 != NULL) {
		printf("%s\n", current4->item);
		current4 = current4->next;
	}
	printf("%s\n", ship->container->first->item);
	printf("%s\n", ship->container->last->item);
	printf("%d\n", ship->container->nb_elem);

	printf("%s", "-----------DEL_ITEM_1\n");
	// TEST DELETE ITEM 1
	del_freight_from_container(ship, freight);


	printf("%s", "-----------BEFORE IF == NULL\n");
	if(ship->container->first == NULL) {
		printf("%s", "LA LISTE EST VIDE\n");
	}

    
    system_control(ship);
    system_repair(ship);
    display_stats(ship);
	free_ship(ship);

	return (0);
}
*/
int main(void) {
    t_game  *game;

    game = create_game();
    game_loop(game);
    return (0);
}
