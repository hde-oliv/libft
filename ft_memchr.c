#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
		if (*(unsigned char *)s++ == c)
			return ((void *)--s);
	return (0);
}
