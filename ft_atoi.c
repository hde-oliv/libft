/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:36:44 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/14 17:40:19 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int i;
	int minus;
	int res;

	minus = 1;
	res = 0;
	i = 0;
	while (nptr[i])
	{
		while (ft_isspace(nptr[i]))
			i++;
		if (nptr[i] == '-')
		{
			minus = -1;
			i++;
		}
		else if (nptr[i] == '+')
			i++;
		if (nptr[i] <= '9' && nptr[i] >= '0')
		{
			res = (res * 10) + (nptr[i] - '0');
			i++;
		}
		else
			return (minus * res);
	}
	return (minus * res);
}
