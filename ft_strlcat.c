/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:46:16 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:07:20 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = dstsize;
	while (j-- != 0 && dst[i] != '\0')
		i++;
	j = dstsize - i;
	if (j == 0)
		return (ft_strlen(src) + i);
	j = 0;
	while (i < (dstsize - 1) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j - 1] = '\0';
	return (ft_strlen(src) + i);
}
