#include "hiz.h"

int	calculate_hiz(int km, int saat)
{
	int	result;

	result = km / saat;
	return (result);
}

int	main(int ac, char **av)
{
	int	km;
	int	saat;
	if (ac == 3)
	{
		km = ft_atoi(av[1]);
		saat = ft_atoi(av[2]);
		ft_putstr_fd("\nsonucunuz -> ", 1);
		ft_putnbr_fd(calculate_hiz(km, saat), 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("daha bisey demiyorum", 1);
}
