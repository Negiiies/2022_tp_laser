/*
 * E89 Pedagogical & Technical Lab
 * project:     move_forward
 * created on:  2023-01-16 - 09:43 +0100
 * 1st author:  dylan.le - dylan.le
 * description: laser
 */

#include "fonction.h"
#include <math.h>

t_accurate_pos move_forward(const t_accurate_pos *start,
                            double                angle,
                            double                len)
{
    t_accurate_pos pos;


    pos.y = start->y + (len * sin(angle));
    pos.x = start->x + (len * cos(angle));
    return pos;
}
