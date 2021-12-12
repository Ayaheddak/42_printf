/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:26:29 by aheddak           #+#    #+#             */
/*   Updated: 2021/11/30 12:45:52 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	unsigned int		n;
	unsigned int		len;

	len = ft_strlen(base);
	n = (unsigned int) nbr;
	if (n >= len)
	{
		ft_putnbr_base(n / len, base, count);
		ft_putnbr_base(n % len, base, count);
	}
	else
	{
		write (1, base + n, 1);
		(*count)++;
	}
}
