#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
	{
		* (char *)s = c;
		n--;
		s++;
	}
	return (s);
}
