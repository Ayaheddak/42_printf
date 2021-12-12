/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:35:51 by aheddak           #+#    #+#             */
/*   Updated: 2021/12/02 04:26:18 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_bs(long nbr, char *base, int *count)
{
	unsigned long		len;
	unsigned long		n;

	len = ft_strlen(base);
	n = (unsigned long) nbr;
	if (n >= len)
	{
		ft_putnbr_bs(n / len, base, count);
		ft_putnbr_bs(n % len, base, count);
	}
	else
	{
		*count += write(1, base + n, 1);
	}
}
