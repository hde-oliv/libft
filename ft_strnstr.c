/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:44:12 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:07:45 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[++i] && i <= len)
	{
		j = 0;
		p = i;
		while (haystack[i++] == needle[j++])
			if (!needle[j] && --i != len)
				return ((char *)&haystack[p]);
		i = p;
	}
	return (NULL);
}
