#ifndef _FONCTION_H_
#define _FONCTION_H_
#include <lapin.h>
#include <math.h>
#include "map.h"
typedef t_bunny_accurate_position t_accurate_pos;

double deg_to_rads(int degrees);

t_accurate_pos move_forward(const t_accurate_pos *start,
                            double                angle,
                            double                len);

t_bunny_position pos_from_accurate(const t_accurate_pos *apos);

void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);

void put_pixel(t_bunny_pixelarray * pxa,
               t_bunny_position *pos,
               unsigned int color);

t_accurate_pos send_ray(struct map *map,
                        const t_accurate_pos *start,
                        double angle);
void draw_impact(struct map *map,
                 t_bunny_pixelarray *pxa,
                 const t_accurate_pos * start ,
                 double angle ) ;
int get_value(int a, int b, float ratio );

void stu_draw_line(t_bunny_pixelarray *px,
                   t_bunny_position   *pos_a,
                   t_bunny_position   *pos_b,
                   unsigned int       color);

float get_ratio(int a, int b, int x);



#endif /*FONCTION*/
