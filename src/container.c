#include "ftl.h"

/*
 * Instantiates a container, and adds it to `ship`
 *
 * Also sets up attributes
 *
 * first = NULL
 * last = NULL
 * nb_elem = 0
 *
 * return:
 *  KO: 0
 *  OK: 1
 */
int add_container_to_ship(t_ship *ship) {
    t_container *container;

    my_putstr(TXT_CON_BEGIN);
    container = malloc(sizeof(t_container));
    if (container == NULL) {
        my_putstr(TXT_CON_ERR);
        return (KO);
    }
    container->first = NULL;
    container->last = NULL;
    container->nb_elem = 0;
    ship->container = container;
    my_putstr(TXT_CON_OK);
    return (OK);
}

/*
 * Adds a container to the linked list
 *
 * if the container is empty, container->first and container->last 
 *    both points to freight
 * otherwise freight will be appended to container->last->next
 */
void    add_freight_to_container(t_ship *ship, t_freight *freight) {
    if (ship->container->first == NULL) {
        ship->container->first = freight;
    } else {
        ship->container->last->next = freight;
        freight->prev = ship->container->last;
    }
    ship->container->last = freight;
    ship->container->nb_elem += 1;
}

/*
 * Remove a container from the linked list
 *
 * Frees the freight, and syncs the linked list
 */
void    del_freight_from_container(t_ship *ship, t_freight *freight) {
    if (freight->prev != NULL) {
        freight->prev->next = freight->next;
    } else {
        ship->container->first = freight->next;
    }

    if (freight->next != NULL) {
        freight->next->prev = freight->prev;
    } else {
        ship->container->last = freight->prev;
    }
    free_freight(freight);
}
