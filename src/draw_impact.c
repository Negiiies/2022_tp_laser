/*
 * E89 Pedagogical & Technical Lab
 * project:     draw
 * created on:  2023-01-17 - 14:51 +0100
 * 1st author:  dylan.le - dylan.le
 * description: impact
 */

#include "fonction.h"

void draw_impact(struct map *map,
                 t_bunny_pixelarray *pxa,
                 const t_accurate_pos *start,
                 double angle )
{
    t_accurate_pos pos;
    t_bunny_position apos;

    pos = send_ray(map, start, angle);
    pos.y *= map->tile_size;
    pos.x *= map->tile_size;
    apos = pos_from_accurate(&pos);
    put_pixel (pxa, &apos, RED);
}
