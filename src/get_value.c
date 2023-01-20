/*
 * E89 Pedagogical & Technical Lab
 * project:     value
 * created on:  2023-01-20 - 11:47 +0100
 * 1st author:  dylan.le - dylan.le
 * description: laser
 */

int get_value(int a, int b, float ratio )
{
    int nb;
    nb = (b - a)* ratio + a;
    return nb;
}
