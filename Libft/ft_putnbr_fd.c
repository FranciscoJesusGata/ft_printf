/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:36:21 by fgata-va          #+#    #+#             */
/*   Updated: 2020/02/07 16:31:48 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;

	if (n <= 2147483647 && n > -2147483648)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			if (n == -2147483648)
			{
				ft_putchar_fd('2', fd);
				n *= -1;
				n = n % 1000000000;
			}
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
}
