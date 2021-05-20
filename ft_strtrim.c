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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		s1_len;
	int		set_len;

	i = 0;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (!ft_strncmp(s1, set, set_len))
		i++;
	if (!ft_strncmp(&s1[s1_len - set_len], set, set_len))
		i++;
	if (i != 0)
	{
		p = (char *) malloc(sizeof(char) * (s1_len - (i * set_len)) + 1);
		if (i == 2)
			ft_strlcpy(p, &s1[set_len], s1_len + 1 - (set_len * 2));
		else
		{
			if (*s1 == *set)
				ft_strlcpy(p, &s1[set_len], s1_len + 1 - set_len);
			else
				ft_strlcpy(p, s1, s1_len + 1 - set_len);
		}
		return (p);
	}
	return (NULL);
}
