/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:30:49 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 21:25:51 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int i;
	char *p;

	p = (char *) malloc(sizeof(char) * 12); /* Try not to hard code this later */

	i = 12;
	p[i] = '\0';
	while (--i != -1)
	{
		if (n != 0)
			p[i] = (n % 10) + 48;
		else
			return (&p[i]);
		n = n / 10;
	}
	return (p);
}
