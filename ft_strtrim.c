/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:07:59 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:08:01 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*ft_rf_strchr(char const *s1, char const *set)
{
	char const	*s;

	s = set;
	while (*set)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)set)
			return (ft_rf_strchr(++s1, s));
		set++;
	}
	return (s1);
}

static char const	*ft_rb_strchr(char const *s1, char const *set)
{
	char const	*s;

	s = set;
	while (*set)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)set)
			return (ft_rb_strchr(--s1, s));
		set++;
	}
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*s;
	char const	*e;
	char		*p;
	size_t		i;

	i = ft_strlen(s1);
	s = ft_rf_strchr(s1, set);
	e = ft_rb_strchr(&s1[i - 1], set);
	if (s == s1 && e == &s1[i - 1])
		return (NULL);
	i = e - s + 2;
	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, i);
	return (p);
}
