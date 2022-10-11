#include "kiyas.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		write(fd, &str[iter], 1);
		iter++;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	long	count;

	count = nb;
	if (count < 0)
	{
		ft_putchar_fd('-', fd);
		count *= -1;
	}
	else if (count > 9)
	{
		ft_putnbr_fd(count / 10, fd);
		ft_putnbr_fd(count % 10, fd);
	}
	else
		ft_putchar_fd(count + '0', fd);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	carp;
	int	result;

	index = 0;
	carp = 1;
	result = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
		{
			carp *= -1;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index] != '\0')
	{
		result = ((str[index] - '0') + (result * 10));
		index++;
	}
	return (result * carp);
}
