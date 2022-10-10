#include "daire.h"

int	ft_pow(int nb, int power)
{
	int	iter;
	int	result;

	iter = 0;
	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (iter < power)
	{
		result = result * nb;
		iter++;
	}
	return (result);
}

int	ft_alan(int r)
{
	int	result;

	result = pi * ft_pow(r, 2);
	return (result);
}

int	ft_cevre(int r)
{
	int	result;

	result = 2 * pi * r;
	return (result);
}

int	main(int ac, char **av)
{
	int	yaricap;

	if (ac == 2)
	{
		yaricap = ft_atoi(av[1]);
		ft_putstr_fd("\nsonucunuz ->\n", 1);
		ft_putstr_fd("dairenin alani -> ", 1);
		ft_putnbr_fd(ft_alan(yaricap), 1);
		ft_putstr_fd("\ndairenin cevresi -> ", 1);
		ft_putnbr_fd(ft_cevre(yaricap), 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("tamam aq anladım mlasın", 1);
}
