/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:05:40 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:07:00 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_chrcnt(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s++)
		if (*s == c)
			i += 1;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	*p;
	char	*t;
	char	**a;
	size_t	i;

	i = ft_chrcnt(s, c);
	a = (char **) malloc(sizeof(char) * (i + 2));
	if (a == NULL)
		return (NULL);
	t = (char *) s;
	i = 0;
	while (*t)
	{
		p = ft_strchr(++t, c);
		t = (char *) p;
		p = (char *) malloc(sizeof(char) * (t - p) + 2);
		if (p == NULL)
		{
			while (i-- != 0)
				free(a[i]);
			free(a);
			return (NULL);
		}
		ft_strlcpy(p, t, t - p + 2);
		a[i++] = p;
	}
	a[i] = "\0";
	return (a);
}
