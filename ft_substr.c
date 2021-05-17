#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (len != 0)
	{
		p = (char *) malloc(sizeof(char) * len);
		ft_strlcpy(p, &s[start], len);
		return (p);
	}
	else
		return (0);
}
