#ifndef KİYAS_H
#define KİYAS_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
int	ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_int_print(int content);
int	ft_convert(size_t data, char *base);
int	ft_type_control(char c, va_list arg);
int	ft_printf(const char *str, ...);

#endif
