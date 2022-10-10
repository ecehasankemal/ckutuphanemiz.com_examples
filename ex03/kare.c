#include "kare.h"

int	kare_alan(int nb)
{
	nb = nb * nb;
	return (nb);
}

int	kare_cevre(int nb)
{
	nb = nb * 4;
	return (nb);
}

int	main(int ac, char **av)
{
	int	value;
	if (ac == 2)
	{
		value = ft_atoi(av[1]);
		ft_putstr_fd("\nsonucunuz ->\n", 1);
		ft_putstr_fd("karenin alani -> ", 1);
		ft_putnbr_fd(kare_alan(value), 1);
		ft_putchar_fd('\n', 1);
		ft_putstr_fd("karenin cevresi -> ", 1);
		ft_putnbr_fd(kare_cevre(value), 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("tam malsin ha hala deniyon", 1);
}
