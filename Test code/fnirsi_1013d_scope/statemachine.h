//----------------------------------------------------------------------------------------------------------------------------------

#ifndef STATEMACHINE_H
#define STATEMACHINE_H

//----------------------------------------------------------------------------------------------------------------------------------

#include "types.h"

//----------------------------------------------------------------------------------------------------------------------------------

void touch_handler(void);

void scan_for_touch(void);

void handle_main_menu_touch(void);
void handle_channel1_menu_touch(void);
void handle_channel2_menu_touch(void);
void handle_trigger_menu_touch(void);

void close_open_sub_menus(void);


//----------------------------------------------------------------------------------------------------------------------------------

#endif /* STATEMACHINE_H */

