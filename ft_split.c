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
	char	**a;
	char	*p;
	char	*start;
	char	*end;
	size_t	i;
	
	i = ft_chrcnt(s, c);
	a = (char **) malloc(sizeof(p) * (i + 2));
	if (a == NULL)
		return (NULL);
	end = (char *) s;
	i = 0;
	while (i != ft_chrcnt(s, c) + 1)
	{
		start = (char *)end;
		end = ft_strchr(start, c);
		if (end != NULL)
			end += 1;
		else
			end = ft_strchr(start, '\0') + 1;
		p = (char *) malloc(sizeof(char) * (end - start));
		if (p == NULL)
		{
			while (i-- != 0)
				free(a[i]);
			free(a);
			return (NULL);
		}
		ft_strlcpy(p, start, end - start);
		a[i++] = p;
	}
	a[i] = 0;
	return (a);
}
