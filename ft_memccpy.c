#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *) src != c)
			*(unsigned char *) dest++ = *(unsigned char *) src++;
		else
			break ;
	}
	return (dest);
}
