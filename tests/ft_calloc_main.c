#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
	char	*p;
	char	*q;

	p = calloc(10, 1);
	q = ft_calloc(10, 1);

	for (int i = 0; i < 12; i++)
		printf("%c", q[i] + 48);
	free(p);
	free(q);
	return (0);
}
