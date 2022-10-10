#include "topla.h"

int	main(int ac, char **av)
{
	int	result;

	if (ac == 3)
	{
		result = ft_atoi(av[1]) + ft_atoi(av[2]);
		ft_putchar_fd('\n', 1);
		ft_putstr_fd("sonucunuz -> ", 1);
		ft_putnbr_fd(result, 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("malsın aq", 1);
}
