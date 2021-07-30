#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int numb1, int numb2)
{
	ft_putchar('0' + (numb1 / 10));
	ft_putchar('0' + (numb1 % 10));
	ft_putchar(' ');
	ft_putchar('0' + (numb2 / 10));
	ft_putchar('0' + (numb2 % 10));
	if (!(numb1 == 98 && numb2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	numb1;
	int	numb2;

	numb1 = 0;
	 while (numb1 < 99)
	{
		numb2 = numb1 + 1;
		 while (numb2 <= 99)
		{
			ft_print(numb1, numb2);
			numb2++;
			 }
		numb1++;
	}
}
