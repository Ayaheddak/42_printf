/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:14:21 by aheddak           #+#    #+#             */
/*   Updated: 2021/11/30 12:22:35 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int		i;

	i = 0;
	if (str)
	{	
		while (str[i] != '\0')
		{
			ft_putchar(str[i], count);
			i++;
		}
	}
	else
	{
		*count += write(1, "(null)", 6);
	}
}
