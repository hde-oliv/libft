/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:05:34 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:06:55 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	number[10];

	i = 0;
	if (n == -2147483648)
	{
		write(fd, '2', sizeof(char));
		n = -147483648;
	}
	if (n < 0)
	{
		write(fd, 45, sizeof(char));
		n = -n;
	}
	while (i++ != 11 && n != 0)
	{
		number[i] = (n % 10) + 48;
		n = n / 10;
	}
	if (i == n)
		write(fd, '0', sizeof(char));
	while (--i != -1)
		write(fd, number[i], sizeof(char));
}
