void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	rows;
	int	columns;

	rows = 1;
	while (rows <= y && x != 0 && y != 0)
	{
		columns = 1;
		while (columns <= x)
		{
			if (rows == 1 && columns == 1)
				ft_putchar('A');
			else if (rows == y && columns == x && x > 1 && y > 1)
				ft_putchar('A');
			else if ((columns == x && rows == 1) || (columns == 1 && rows == y))
				ft_putchar('C');
			else if (rows == 1 || columns == 1 || rows == y || columns == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			columns++;
		}
		ft_putchar('\n');
		rows++;
	}
}
