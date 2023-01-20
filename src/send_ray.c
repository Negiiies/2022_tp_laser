/*
 * E89 Pedagogical & Technical Lab
 * project:     send
 * created on:  2023-01-17 - 14:52 +0100
 * 1st author:  dylan.le - dylan.le
 * description: ray
 */
#include "fonction.h"
#include "map.h"
t_accurate_pos send_ray(struct map *map,
                        const t_accurate_pos *start,
                        double angle)
{
    t_accurate_pos pos;
    int i;
    double taille;

    taille = 0;
    i = (int)start->x + ((int)start->y * map->width);
    while (map->map[i] != 1 ) {
        pos = move_forward(start, angle, taille);
        i = (int)pos.x + ((int)pos.y * map->width);
        taille += 0.01;

    }
    if(map->map[i] == 1) {
        pos = move_forward(start, angle, taille);
    }
    return pos;
}

