#ifndef __TEXTS_H__
#define __TEXTS_H__

#define SHIP_NAME "Nebuchadnezzar"

/* Prompt */
#define PROMPT "repair_system ~~> "

/* Ships */
#define TXT_SHIP_BEGIN "[INFO] BUILDING SHIP\n"
#define TXT_SHIP_OK "[SUCCESS] SHIP SUCCESSFULLY BUILT\n"
#define TXT_ERR_SHIP "[FAILURE] COULD NOT BUILD SHIP: NOT ENOUGH MATERIALS\n"

/* Weapons */
#define TXT_WEAP_BEGIN "[INFO] ADDING WEAPONS...\n"
#define TXT_WEAP_OK "[SUCCESS] WEAPONS ARMED AND LOADED\n"
#define TXT_WEAP_ERR "[FAILURE] WEAPONS EXPLODED WHILE BEING LOADED\n"

/* Ftl drive */
#define TXT_FTL_BEGIN "[INFO] ADDING FTL DRIVE...\n"
#define TXT_FTL_OK "[SUCCESS] FTL DRIVE ENABLED\n"
#define TXT_FTL_ERR "[ERROR] FTL DRIVE BLEW UP\n"

/* Navigation tools */
#define TXT_NAV_BEGIN "[INFO] ADDING NAVIGATION TOOLS...\n"
#define TXT_NAV_OK "[SUCCESS] NAVIGATION TOOLS ONLINE\n"
#define TXT_NAV_ERR "[ERROR] NAVIGATION TOOLS CRASHED THE WHOLE SHIP\n"

/* Containers */
#define TXT_CON_BEGIN "[INFO] ADDING CONTAINER...\n"
#define TXT_CON_OK "[SUCCESS] CONTAINER IS ATTACHED\n"
#define TXT_CON_ERR "[ERROR] CONTAINER LOADING CREATED A HULL BREACH\n"

/* System states */
#define TXT_SYS_ON "online"

#define CHK_FTL_BEG "[INFO] Checking FTL drive...\n"
#define CHK_FTL_OK "[OK] FTL drive checked\n"
#define CHK_FTL_HS "[ERROR] FTL drive shut down\n"

#define CHK_NAV_BEG "[INFO] Checking navigation tools...\n"
#define CHK_NAV_OK "[OK] Navigation tools are on\n"
#define CHK_NAV_HS "[ERROR] Navigation tools aren't available\n"

#define CHK_WEAP_BEG "[INFO] Checking weapon system\n"
#define CHK_WEAP_OK "[OK] Weapons are online\n"
#define CHK_WEAP_HS "[ERROR] Weapons are shut down\n"

/* System repairs */
#define REP_FTL_BEG "[INFO] Fixing FTL drive...\n"
#define REP_FTL_OK "[OK] FTL drive fixed\n"
#define REP_FTL_ERR "[ERROR] FTL drive fix failed\n" 

#define REP_NAV_BEG "[INFO] Fixing navigation tools...\n"
#define REP_NAV_OK "[OK] Navigation tools fixed\n"
#define REP_NAV_ERR "[ERROR] Something went wrong while fixing nav tools\n"

#define REP_WEAP_BEG "[INFO] Fixing weapons...\n"
#define REP_WEAP_OK "[OK] Weapon fixed\n"
#define REP_WEAP_ERR "[ERROR] Could not fix weapons\n"

/* Commands */
#define COMMAND_ERR "[SYSTEM FAILURE] Command reader is locked\n"
#define COMMAND_NOT_FOUND "[SYSTEM FAILURE] Unkown command\n"
#define INPUT_ERR "[INPUT FAILURE] Could not interpret command\n"

/* Game texts */
#define WIN_TXT "You managed to survived every sector. You won. :) \n"

#endif /* __TEXTS_H__ */
