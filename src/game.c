#include "ftl.h"

static const t_input_commands g_input_commands[] = {
    {"attack", attack},
    {"detect", scan},
    {"jump", jump},
    {"getbonus", bonus},
    {"repair_system", system_repair},
    {"control_system", system_control},
    {"stat", display_stats},
    {"exit", game_exit}
};
