#ifndef __FTL_H__
#define __FTL_H__
#include <stdlib.h>

#include "consts.h"
#include "my_string.h"
#include "texts.h"

/* Declaration of the used structures */
typedef struct s_ship t_ship;
typedef struct s_weapon t_weapon;
typedef struct s_ftl_drive t_ftl_drive;


/* Definition of the different structures */
struct      s_weapon {
    char    *system_state;
    int     damage;
};

struct          s_ftl_drive {
    int         energy;
    char        *system_state;
};

struct          s_ship {
    int         hull;
    t_weapon    *weapon;
    t_ftl_drive *ftl_drive;
};

/* Prototypes */
t_ship  *create_ship();
int     add_weapon_to_ship(t_ship*);
int     add_ftl_drive_to_ship(t_ship*);

void    free_ship(t_ship*);
void    free_weapon(t_weapon*);
void    free_ftl_drive(t_ftl_drive*);

#endif /* __FTL_H__ */
