#include "tekcift.h"

int	main(int ac, char **av)
{
	int	count;

	if (ac == 2)
	{
		count = ft_atoi(av[1]);
		ft_putchar_fd('\n', 1);
		if (count % 2 == 0)
			ft_putstr_fd("Girilen sayi cifttir", 1);
		else
			ft_putstr_fd("Girilen sayi tektir", 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("\nfazla ya da az sayi girdin düzgün gir\n", 1);
	return (0);
}
