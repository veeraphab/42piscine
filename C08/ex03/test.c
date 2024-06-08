#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int	main(int argc, char const *argv[])
{
	t_point  point;
	set_point(&point);
	printf("x = %d, y = %d",point.x,point.y);
	return 0;
}
