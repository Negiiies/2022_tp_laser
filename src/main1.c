/*
 * E89 Pedagogical & Technical Lab
 * project:     2 laser
 * created on:  2023-01-17 - 11:24 +0100
 * 1st author:  dylan.le - dylan.le
 * description: lasere
 */

#include <assert.h>
#include <lapin.h>
#include <math.h>
#include "map.h"
#include "fonction.h"

// vos prototypes

int main(void)
{
        t_bunny_window           *win;
        t_bunny_pixelarray       *px;
        t_bunny_accurate_position pos;
        double                    angle;

        int mx[6 * 6] = {
            1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 1,
            1, 1, 0, 1, 1, 1,
            1, 1, 1, 1, 1, 1,
        };
        struct map map;
        map.width     = 6;
        map.height    = 6;
        map.tile_size = 100;
        map.map       = &mx[0];
        pos.x         = 2.5;
        pos.y         = 5.5;
        angle         = 0;
        win           = bunny_start(map.width * map.tile_size,
                                    map.height * map.tile_size,
                                    false,
                                    "fl: TP Laser");
        px = bunny_new_pixelarray(win->buffer.width, win->buffer.height);
        clear_pixelarray(px, BLACK);
        send_ray(&map, &pos, angle);
        draw_impact(&map, px, &pos, angle);
        bunny_blit(&win->buffer, &px->clipable, NULL);
        bunny_display(win);
        bunny_usleep(5e6);
        bunny_delete_clipable(&px->clipable);
        bunny_stop(win);
        return (0);
}
