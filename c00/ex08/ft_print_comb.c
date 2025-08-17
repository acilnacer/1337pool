#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n) // pour ne pas mettre ", " après le dernier
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (tab[0] <= 10 - n)
	{
		print_number(tab, n);
		i = n - 1;
		tab[i]++;
		while (i > 0 && tab[i] > 9 - (n - 1 - i))
		{
			i--;
			tab[i]++;
		}
		while (i < n - 1)
		{
			tab[i + 1] = tab[i] + 1;
			i++;
		}
	}
}