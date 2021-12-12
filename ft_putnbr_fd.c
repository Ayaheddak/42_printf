/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:50:00 by aheddak           #+#    #+#             */
/*   Updated: 2021/11/30 12:50:06 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int *count)
{
	char			c;
	unsigned int	a;

	if (n < 0)
	{
		a = (unsigned int ) -n;
		ft_putchar('-', count);
	}
	else
		a = (unsigned int) n;
	if (a >= 10)
	{
		c = (a % 10) + '0';
		ft_putnbr_fd(a / 10, count);
		ft_putchar(c, count);
	}
	if (a < 10)
	{
		c = a + '0';
		ft_putchar(c, count);
	}
}
