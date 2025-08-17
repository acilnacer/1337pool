#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0'); // dizaine du 1er nombre
			ft_putchar(a % 10 + '0'); // unité du 1er nombre
			write(1, " ", 1);
			ft_putchar(b / 10 + '0'); // dizaine du 2e nombre
			ft_putchar(b % 10 + '0'); // unité du 2e nombre
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
