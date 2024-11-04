#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int	r;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n > 9)
	{
		r = n % 10;
		n = n / 10;
		ft_putnbr_fd(n, fd);
		r = r + 48;
		write(fd, &r, 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n , fd);
	}
	else
	{
		r = n + 48;
		write(fd, &r, 1);
	}
}