/*
 * E89 Pedagogical & Technical Lab
 * project:     ratio
 * created on:  2023-01-20 - 11:46 +0100
 * 1st author:  dylan.le - dylan.le
 * description: laser
 */

float get_ratio(int a, int b, int x)
{
    float i;
    float nb;
    if(a == b){
        return 1;
    }
    if(a < b){
        i = (b - a);
        nb = (x - a);
        nb = nb / i;
    }else{
        i =(a - b);
        nb =(x - b);
        nb = nb /1;
    }
    return (nb);
}
