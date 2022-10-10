#ifndef DORTGEN_H
#define DORTGEN_H
#define pi 3
#include <unistd.h>


void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
int	ft_atoi(const char *str);
int	ft_pow(int nb, int power);
int	ft_alan(int r);
int	ft_cevre(int r);

#endif
