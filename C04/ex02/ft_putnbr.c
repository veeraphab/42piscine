#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	int x[10];
	int i;

	i = 0;
	if (nb==0){
		write(1,"0",1);
		return;
	}
	if (nb < 0){
		 write(1,"-",1);
		nb *= -1;
	}
	while (nb > 0)
	{
		x[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1,x+i,1);
		i--;
	}
}
// int main(void)
// {
//     write(1,"\n",1);
//     ft_putnbr(-109999209);
// }
