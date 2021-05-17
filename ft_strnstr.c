/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:44:12 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 20:31:37 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, char *little, size_t len)
{
	int	i;
	int	j;
	int	p;

	i = -1;
	if (!*little)
		return ((char *)big);
	while (big[++i] && i < len)
	{
		j = 0;
		p = i;
		while (big[i++] == little[j++])
			if (!little[j] && --i != len)
				return ((char *)&big[p]);
		i = p;
	}
	return (0);
}
