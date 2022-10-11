#include "kiyas.h"

int	main(int ac, char **av)
{
	int	count1;
	int	count2;

	if (ac == 3)
	{
		count1 = ft_atoi(av[1]);
		count2 = ft_atoi(av[2]);
		if (count1 > count2)
			ft_printf("\n%d > %d\n", count1, count2);
		else if (count2 > count1)
			ft_printf("\n%d > %d\n", count2, count1);
		else
			ft_printf("\n%d = %d\n", count1, count2);
	}
	else
		ft_printf("\nolm duzgun girsene neden boyle yapıyorsun\n");
	return (0);
}
