#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		while (n-- > 0)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	else
		while (n-- > 0)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}
