#include "inputcount.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putchar_fd('\n', 1);
		ft_putstr_fd("sonucunuz -> ", 1);
		ft_putnbr_fd(ft_atoi(av[1]), 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("Fazla girdin aq", 1);
}
