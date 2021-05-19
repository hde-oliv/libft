#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb * size > INT_MAX)
		return (NULL);
	else if (nmemb * size == 0)
		return (NULL);
	else
	{
		p = malloc(nmemb * size);
		ft_bzero(p, nmemb * size);
		return (p);
	}
}
