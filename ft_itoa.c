#include "libft.h"

size_t	ft_intlen(int i)
{
	size_t	size;

	size = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		size++;
		i = i / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*p;
	int		minus;

	i = ft_intlen(n);
	minus = n < 0;
	i += minus;
	p = (char *) malloc(sizeof(char) * i + 1);
	p[i] = '\0';
	if (minus)
		p[0] = '-';
	while (--i != (minus - 1))
	{
		if ((n % 10) < 0)
			p[i] = ((n % 10) * -1) + 48;
		else
			p[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (p);
}
