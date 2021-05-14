#include <stdlib.h>
#include <limits.h>

void ft_bzero(void *s, size_t n);

void *ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	if (nmemb * size > INT_MAX)
		return (0);
	else if (nmemb * size == 0)
		return (0);
	else
	{
		p = malloc(nmemb * size);
		ft_bzero(p, nmemb * size);
		return (p);
	}
}
