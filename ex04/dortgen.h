#ifndef DORTGEN_H
#define DORTGEN_H
#include <unistd.h>


void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
int	ft_atoi(const char *str);
int	dortgen_cevre(int nb, int num);
int	dortgen_alan(int nb, int num);

#endif
