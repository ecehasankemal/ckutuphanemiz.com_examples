#ifndef KARE_H
#define KARE_H
#include <unistd.h>


void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
int	ft_atoi(const char *str);
int	kare_alan(int nb);
int	kare_cevre(int nb);

#endif
