/*
 * E89 Pedagogical & Technical Lab
 * project:     line
 * created on:  2023-01-20 - 11:45 +0100
 * 1st author:  dylan.le - dylan.le
 * description: laser
 */

#include <lapin.h>
#include "fonction.h"
void stu_draw_line(t_bunny_pixelarray *px,
                   t_bunny_position   *pos_a,
                   t_bunny_position   *pos_b,
                   unsigned int       color)
{
    int i;
    int j;
    t_bunny_position pos;
    int a;
    int b;
    int c;
    int d;
    a = pos_a->x;
    b = pos_a->y;
    c = pos_b->x;
    d = pos_b->y;
    i = pos_a-> x;
    j = pos_a-> y;

    if (pos_b-> x - pos_a-> x >= pos_b-> y - pos_a-> y) {
        while(i != pos_b-> x){
            pos.x = i;
            pos.y = get_value(b, d, get_ratio(a, c, i));
            put_pixel(px, &pos, color);
            i += 1;
        }
    } else {
        while(j != pos_b-> y ){
            pos.y = j;
            pos.x = get_value(a, c, get_ratio(b, d, j));
            put_pixel(px, &pos, color);
            j += 1;
        }
    }
}
