/*****************************************************************************/
// Handle mapping of various joystick controllers
/*****************************************************************************/

#ifndef JOYMAPPING_H
#define JOYMAPPING_H

#include <inttypes.h>

void map_joystick(uint32_t *map, uint32_t *mmap);
void map_joystick_show(uint32_t *map, uint32_t *mmap, char *players_str);
int map_paddle_btn();

#endif // JOYMAPPING_H
