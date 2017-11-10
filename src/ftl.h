/*
** ftl.h for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 19:38:09 2017 Theo Massard
** Last update Fri Nov  10 19:38:09 2017 Theo Massard
*/

#ifndef __FTL_H__
#define __FTL_H__
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "consts.h"
#include "my_string.h"
#include "texts.h"
#include "macros.h"

/* Declaration of the used structures */
/* Ship-related structs */
typedef struct s_ship t_ship;
typedef struct s_weapon t_weapon;
typedef struct s_ftl_drive t_ftl_drive;
typedef struct s_navigation_tools t_navigation_tools;

/* Loot structs */
typedef struct s_freight t_freight;
typedef struct s_container t_container;
typedef struct s_bonus t_bonus;

/* Repair commands */
typedef struct s_repair_command t_repair_command;

/* Game structs */
typedef struct s_sector t_sector;
typedef struct s_enemy t_enemy;
typedef struct s_game t_game;
typedef struct s_input_commands t_input_commands;

/* Definition of the different structures */
struct          s_navigation_tools {
    char        *system_state;
    int         sector;
    int         evade;
    int         has_scanned;
};

struct          s_weapon {
    char        *system_state;
    int         damage;
};

struct          s_ftl_drive {
    int         energy;
    char        *system_state;
};

struct          s_freight {
    char        *item;
    t_freight   *next;
    t_freight   *prev;
};

struct          s_container {
    t_freight   *first;
    t_freight   *last;
    int         nb_elem;
};

struct                  s_ship {
    char                *name;
    int                 hull;
    t_weapon            *weapon;
    t_ftl_drive         *ftl_drive;
    t_navigation_tools  *nav_tools;
    t_container         *container;
};

struct          s_bonus {
    char        *name;
    void        (*command)(t_ship*);
};

struct          s_repair_command {
    char        *command_name;
    void        (*command)(t_ship*);
};

struct          s_enemy {
    char        *name;
    int         damage;
    int         hull;
};

struct          s_sector {
    int         lvl;
    t_enemy     *enemy;
};

struct          s_game {
    t_ship      *ship;
    t_sector    *sector;
    int         kill_count;
};

struct      s_input_commands {
    char    *name;
    int     (*command)(t_game*);
};

/* Prototypes */
t_ship  *create_ship();
t_game  *create_game();
t_ship  *setup_ship();

int     add_weapon_to_ship(t_ship*);
int     add_ftl_drive_to_ship(t_ship*);
int     add_navigation_tools_to_ship(t_ship*);
int     add_container_to_ship(t_ship*);
void    add_freight_to_container(t_ship*, t_freight*);
void    del_freight_from_container(t_ship*, t_freight*);

void    free_ship(t_ship*);
void    free_weapon(t_weapon*);
void    free_ftl_drive(t_ftl_drive*);
void    free_nav_tools(t_navigation_tools*);
void    free_container(t_container*);
void    free_freight(t_freight*);
void    free_game(t_game*);

void    fun_attackbonus(t_ship*);
void    fun_evadebonus(t_ship*);
void    fun_energy(t_ship*);
void    get_bonus(t_ship*);

void    system_control(t_ship*);
void    ftl_drive_check(t_ship*);
void    navigation_tools_system_check(t_ship*);
void    weapon_system_check(t_ship*);
void    name_ship(t_ship*);

void    system_repair(t_ship*);
void    ftl_drive_system_repair(t_ship*);
void    weapon_system_repair(t_ship*);
void    navigation_tools_system_repair(t_ship*);

void    display_hull(t_ship*);
void    display_energy(t_ship*);
void    display_evade(t_ship*);
void    display_damage(t_ship*);
void    display_stats(t_ship*);

int     detect(t_game*);
int     attack(t_game*);
int     bonus(t_game*);
int     jump(t_game*);
int     repair(t_game*);
int     control(t_game*);
int     stats(t_game*);
int     game_exit(t_game*);

int     is_alive(t_game*);
int     has_energy(t_game*);
int     has_won(t_game*);
int     can_continue(t_game*);

void    player_attack(t_game*);
int     enemy_is_alive(t_game*);
void    enemy_attack(t_game*);

void    create_freight(t_game*);
void    create_sector(t_game*);

/* Stats */
int     generate_nbr(int, int);
int     get_percent(int);
float   my_pow(float, float);

/* Game loop */
int     get_input(t_game*);
void    game_loop(t_game*);
void    disp_prompt();

#endif /* __FTL_H__ */
