/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:07:35 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:07:37 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, sizeof(p));
	while (p[i])
	{
		f(i, p[i]);
		i++;
	}
	return (p);
}
