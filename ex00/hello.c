#include <unistd.h>

void	hello(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		write(1, &str[iter], 1);
		iter++;
	}
}
int	main(void)
{
	hello("\nC Programlama dunyasına hos geldiniz\n");

	return (0);
}
