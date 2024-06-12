#include "bsq.h"

int	min(int a, int b, int c)
{
	int		min_val;

	min_val = a;
	if (b < min_val)
		min_val = b;
	if (c < min_val)
		min_val = c;
	return (min_val);
}
