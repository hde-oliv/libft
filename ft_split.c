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

	i = ft_chrcnt(s, c);
	a = (char **) malloc(sizeof(b) * (i + 4));
	b = (char *) s;
	j = 0;
	while (j != i + 1)
	{
		a[j++] = b++;
		b = ft_strchr(b, c);
	}
	a[j] = ft_strchr(s, '\0');
	a[j + 1] = 0;
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	char	**d;
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	a = (char **) malloc(sizeof(p) * (ft_chrcnt(s, c) + 2));
	d = ft_adrr(s, c);
	while (*d[j] != '\0' && d[j])
	{
		if (d[j + 1] - d[j] != 1 && d[j] == s)
		{
			p = ft_substr(d[j], 0, d[j + 1] - d[j]);
			a[i++] = p;
		}
		else if (d[j + 1] - d[j] != 1 && *d[j] != '\0')
		{
			p = ft_substr(d[j], 1, d[j + 1] - d[j] - 1);
			a[i++] = p;
		}
		j++;
	}
	a[i] = 0;
	free(d);
	return (a);
}
