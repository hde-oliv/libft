#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strdup(const char *s)
{
	size_t	i;
	void	*p;

	i = ft_strlen(s) + 1;
	p = malloc(i * sizeof(char));
	ft_strlcpy(p, s, i);
	return (p);
}
