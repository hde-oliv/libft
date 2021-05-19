#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (len != 0)
	{
		p = (char *) malloc(sizeof(char) * len + 1);
		ft_strlcpy(p, &s[start], len + 1);
		return (p);
	}
	else
		return (NULL);
}
