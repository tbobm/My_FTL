#ifndef __TEXTS_H__
#define __TEXTS_H__

#define SHIP_NAME "Nebuchadnezzar\n"

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
#define CHK_FTL_OK "reacteur OK!\n"
#define CHK_FTL_HS "reacteur hors service!\n"

#define CHK_NAV_BEG "verification du systeme de navigation en cours...\n"
#define CHK_NAV_OK "systeme de navigation OK!\n"
#define CHK_NAV_HS "systeme de navigation hors service!\n"

#define CHK_WEAP_BEG "verification du systeme d'armement en cours...\n"
#define CHK_WEAP_OK "systeme d'armement OK!\n"
#define CHK_WEAP_HS "systeme d'armement hors service!\n"

/* System repairs */
#define REP_FTL_BEG "reparation du reacteur en cours...\n"
#define REP_FTL_OK "reparation termine! systeme reacteur OK!\n"
#define REP_FTL_ERR "les reparations du reacteur ont echoue\n" 

#define REP_NAV_BEG "reparation du systeme de navigation en cours...\n"
#define REP_NAV_OK "reparation termine! systeme de navigation OK!\n"
#define REP_NAV_ERR "les reparations des outils de navigations ont echoue\n"

#define REP_WEAP_BEG "reparation du systeme d'armement en cours...\n"
#define REP_WEAP_OK "reparation termine! systeme d'armement OK!\n"
#define REP_WEAP_ERR "les reparations du systeme d'armement ont echoue\n"

/* Commands */
#define COMMAND_ERR "[SYSTEM FAILURE] : le lecteur de commande est bloque\n"
#define COMMAND_NOT_FOUND "[SYSTEM FAILURE] : commande inconnue\n"
#define INPUT_ERR "[INPUT FAILURE] : commande non interpretable\n"

/* Game texts */
#define WIN_TXT "You managed to survived every sector. You won. :) \n"

#endif /* __TEXTS_H__ */
