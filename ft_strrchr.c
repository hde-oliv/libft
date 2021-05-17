char	*ft_strrchr(const char *s, int c)
{
	const char	*i;

	i = s;
	while (*s++)
		continue ;
	while (--s != i)
		if (*s == c)
			return ((char *)s);
	return (0);
}
