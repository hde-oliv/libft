/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:08:04 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:08:08 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (start > ft_strlen(s))
		return (NULL);
	p = (char *) malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
//	if (start < ft_strlen(s))
	ft_strlcpy(p, &s[start], len + 1);
//	else
//		ft_strlcpy(p, "\0", len + 1);
	return (p);
}
