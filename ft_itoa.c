#include <stdlib.h>

size_t	ft_intlen(int i)
{
	size_t	size;

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

	i = ft_intlen(n);
	p = (char *) malloc(sizeof(char) * i);
	while (--i != -1)
	{
		if (n != 0)
			p[i] = (n % 10) + 48;
		else
			return (&p[i]);
		n = n / 10;
	}
	return (p);
}
