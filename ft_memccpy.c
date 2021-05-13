#include <stddef.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		if (* (char *) src != c)
		{
			* (char *) dest = * (char *) src;
			src++;
			dest++;
			n--;
		}
		else
		{
			* (char *) dest = * (char *) src;
			break ;
		}
	}
	return (dest);
}
