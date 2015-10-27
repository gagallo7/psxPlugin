/*
 * =====================================================================================
 *
 *       Filename:  example.cpp
 *
 *    Description:  Using README example
 *
 *        Version:  1.0
 *        Created:  10/23/2015 09:29:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guilherme Alcarde Gallo (), 
 *   Organization:  UNICAMP
 *
 * =====================================================================================
 */

#include <cstdio>
#include <unistd.h>
#include "joystick.hh"

int main ()
{
    Joystick joystick(1);

    while (true)
    {
        // Restrict rate
        usleep(1000);

        // Attempt to sample an event from the joystick
        JoystickEvent event;
        if (joystick.sample(&event))
        {
            if (event.isButton())
            {
                printf("Button %u is %s\n", event.number, event.value == 0 ? "up" : "down");
            }
            else if (event.isAxis())
            {
                printf("Axis %u is at position %d\n", event.number, event.value);
            }
        }
    }

    return 0;

}
