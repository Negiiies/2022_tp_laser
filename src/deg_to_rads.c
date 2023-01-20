/*
 * E89 Pedagogical & Technical Lab
 * project:     deg_to_rads
 * created on:  2023-01-16 - 11:00 +0100
 * 1st author:  dylan.le - dylan.le
 * description: laser
 */

#include <stdio.h>
#include <math.h>


double deg_to_rads (int degrees)
{
    double rad;
    rad = ((degrees * M_PI) /180);
    return(rad);
}
