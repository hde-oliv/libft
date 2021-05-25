/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:05:40 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/24 21:24:06 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_chrcnt(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s++)
		if (*s == c)
			i += 1;
	return (i);
}

static char	**ft_adrr(const char *s, char c)
{
	char	**a;
	char	*b;
	size_t	i;
	size_t	j;

	i = ft_chrcnt(s, c) + 1;
	a = (char **) malloc(sizeof(b) * i + 2);
	b = (char *) s;
	j = 0;
	while (j != i)
	{
		a[j++] = b++;
		b = ft_strchr(b, c) + 1;
	}
	a[j] = ft_strchr(s, '\0');
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	char	**d;
	char	*p;
	size_t	i;
	size_t	j;

	i = ft_chrcnt(s, c);
	d = ft_adrr(s, c);
	a = (char **) malloc(sizeof(p) * i + 2);
	j = 0;
	while (*d[j] != '\0')
	{
		while (d[j + 1] - d[j] == 1)
			j++;
		if (*d[j + 1] != '\0')
			p = ft_substr(d[j], 0, d[j + 1] - d[j] - 1);
		else
			p = ft_substr(d[j], 0, d[j + 1] - d[j]);
		a[j] = p;
	}
	a[j] = NULL;
	free(d);
	return (a);
}
