#include "yas.h"
#include "ft_printf.h"

int	main(int ac, char **av)
{
	int	yas;
	int	ay;
	int	hafta;
	int	gun;
	int	saat;
	int	dakika;
	int	saniye;

	if (ac == 2)
	{
		yas = ft_atoi(av[1]);
		ay = yas * 12;
		hafta = yas * 52;
		gun = yas * 365;
		saat = yas * 365 * 24;
		dakika = yas * 365 * 24 * 60;
		saniye = yas * 365 * 24 * 60 * 60;

		ft_printf("\nYasiniz %i olduguna gore :", yas);
		ft_printf("\n%d ay", ay);
		ft_printf("\n%d hafta", hafta);
		ft_printf("\n%d gun", gun);
		ft_printf("\n%d saat", saat);
		ft_printf("\n%d dakika", dakika);
		ft_printf("\n%d saniye\n", saniye);
	}
	else
		ft_printf("\nYasini gir aq neden girmiyon\n");
	return (0);
}
