#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len || s2_len)
	{
		p = (char *) malloc(sizeof(char) * (s1_len + s2_len) + 1);
		ft_strlcat(p, s1, s1_len);
		ft_strlcat(p, s2, s2_len);
		return (p);
	}
	else
		return (0);
}
