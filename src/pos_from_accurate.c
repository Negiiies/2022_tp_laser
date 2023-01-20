/*
 * E89 Pedagogical & Technical Lab
 * project:     accurate
 * created on:  2023-01-18 - 13:17 +0100
 * 1st author:  dylan.le - dylan.le
 * description: laser
 */

#include "fonction.h"
t_bunny_position pos_from_accurate(const t_accurate_pos *apos)
{
    t_bunny_position pos;

    pos.y = (int) apos-> y;
    pos.x = (int) apos-> x;
    return pos;
}

