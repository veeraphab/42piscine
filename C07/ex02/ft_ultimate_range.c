#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	if (min >= max)
    {
    	*range = 0;
   		return 0;
    }
	size = max - min;
	*range = (int *)malloc(size * 4);
	if (*range == 0)
		return -1;
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (size);
}
// #include <stdio.h>
// int main(void)
// {
// 	int min = 5;
// 	int max = 10;
// 	int *range;
// 	int size = ft_ultimate_range(&range, min, max);
// 	printf("size  = %d\n", size);
// 	for (int i = 0; i < max - min; i++)
// 		printf("%d, ", range[i]);
// 	free(range);
// 	return 0;
// }
