#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	number[10];

	i = 0;
	if (n == -2147483648)
	{
		write(fd, '2', sizeof(char));
		n = -147483648;
	}
	if (n < 0)
	{
		write(fd, 45, sizeof(char));
		n = -n;
	}
	while (i++ != 11 && n != 0)
	{
		number[i] = (n % 10) + 48;
		n = n / 10;
	}
	if (i == n)
		write(fd, '0', sizeof(char));
	while (--i != -1)
		write(fd, number[i], sizeof(char));
}
