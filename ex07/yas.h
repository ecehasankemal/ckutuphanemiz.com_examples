#ifndef YAS_H
#define YAS_H
#include <unistd.h>


void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
int	ft_atoi(const char *str);
int	calculate_hiz(int km, int saat);

#endif
