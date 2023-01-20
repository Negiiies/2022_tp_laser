/*
 * E89 Pedagogical & Technical Lab
 * project:     laser
 * created on:  2023-01-16 - 09:34 +0100
 * 1st author:  dylan.le - dylan.le
 * description: main
 */
#include <assert.h>
#include <lapin.h>
#include <math.h>
#include "fonction.h"

int main(void)
{
    t_bunny_accurate_position pos;
    t_bunny_accurate_position res;

    pos.x = 0;
    pos.y = 0;
    res   = move_forward(&pos, M_PI / 4, 1);
    assert(res.x - sqrt(2) / 2 < 0.01);
    assert(res.y - sqrt(2) / 2 < 0.01);
    res = move_forward(&pos, 5 * M_PI / 4, 20);
    assert(res.x + 20 * sqrt(2) / 2 < 0.01);
    assert(res.y + 20 * sqrt(2) / 2 < 0.01);

    //t_bunny_position npos = pos_from_accurate(&res);
    // assert(npos.x + (int) (20 * sqrt(2) / 2) == 0.01);
    //assert(npos.y + (int) (20 * sqrt(2) / 2) == 0.01);
}
