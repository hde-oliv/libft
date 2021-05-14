#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
		if (* (unsigned char *)s1++  == * (unsigned char *)s2++)
			continue ;
		else
			return(* (unsigned char *)s1 - * (unsigned char *)s2);
	return (0);
}
