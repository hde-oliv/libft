#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		s1_len;
	int		set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (!ft_strncmp(s1, set, set_len))
		i++;
	if (!ft_strnstr(&s1[set_len], (char *)set, s1_len - set_len))
		i++;
	p = (char *) malloc(sizeof(char) * (s1_len - (i * set_len)) + 1);
	while (*s1++)
}
