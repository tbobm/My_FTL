#ifndef __FTL_H__
#define __FTL_H__
#include <stdlib.h>

#include "consts.h"
#include "my_string.h"


typedef struct s_ship t_ship;
typedef struct s_weapon t_weapon;

struct      s_weapon {
    char    *system_state;
    int     damage;
};

struct          s_ship {
    int         hull;
    t_weapon    *weapon;
};



t_ship  *create_ship();

#endif /* __FTL_H__ */
