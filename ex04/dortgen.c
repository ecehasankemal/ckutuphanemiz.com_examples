#include "dortgen.h"

int	dortgen_alan(int nb, int num)
{
	int	result;

	result = nb * num;
	return (result);
}

int	dortgen_cevre(int nb, int num)
{
	int	result;

	nb = nb * 2;
	num = num * 2;
	result = nb + num;
	return (result);
}

int	main(int ac, char **av)
{
	int	kenar1;
	int	kenar2;
	if (ac == 3)
	{
		kenar1 = ft_atoi(av[1]);
		kenar2 = ft_atoi(av[2]);
		ft_putchar_fd('\n', 1);
		ft_putstr_fd("sonucunuz ->\n", 1);
		ft_putstr_fd("dikdortgenin alani -> ", 1);
		ft_putnbr_fd(dortgen_alan(kenar1, kenar2), 1);
		ft_putstr_fd("\ndikdortgenin cevresi -> ", 1);
		ft_putnbr_fd(dortgen_cevre(kenar1, kenar2), 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("olm cok mal adamsın dogrı gir artık", 1);
}
