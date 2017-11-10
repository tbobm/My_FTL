/*
** utils.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 15:54:32 2017 Theo Massard
** Last update Fri Nov  10 15:54:32 2017 Theo Massard
*/

#include "ftl.h"

/*
 * Frees weapon
 */
void    free_weapon(t_weapon *weapon) {
    free(weapon->system_state);
    free(weapon);
}

/*
 * Frees ftl_drive
 */
void    free_ftl_drive(t_ftl_drive *ftl_drive) {
    free(ftl_drive->system_state);
    free(ftl_drive);
}

/*
 * Frees navigation tools
 */
void    free_nav_tools(t_navigation_tools *nav_tools) {
    free(nav_tools->system_state);
    free(nav_tools);
}

/*
 * Frees containers
 */
void    free_container(t_container *container) {
    t_freight   *freight;

    if (container->first != NULL) {
        freight = container->first;
        while (freight != NULL) {
            freight = freight->next;
            free_freight(freight->prev);
        }
    }
    free(container);
}

/*
 * Frees freight
 */
void    free_freight(t_freight *freight) {
    free(freight->item);
    free(freight);
}
