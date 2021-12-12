/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:36:29 by aheddak           #+#    #+#             */
/*   Updated: 2021/12/02 01:58:29 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_utils(char c, int *count, va_list ar)
{
	if (c == '\0')
		return (*count);
	else if (c == 'c')
		ft_putchar ((char) va_arg (ar, int), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd ((int) va_arg (ar, int), count);
	else if (c == 's')
		ft_putstr((char *) va_arg (ar, char *), count);
	else if (c == 'x')
		ft_putnbr_base ((int) va_arg (ar, int), "0123456789abcdef", count);
	else if (c == 'X')
		ft_putnbr_base ((int) va_arg (ar, int), "0123456789ABCDEF", count);
	else if (c == '%')
		ft_putchar('%', count);
	else if (c == 'u')
		ft_putnbr_bs(
			(unsigned int)va_arg(ar, unsigned int), "0123456789", count);
	else if (c == 'p')
	{
		ft_putchar ('0', count);
		ft_putchar ('x', count);
		ft_putnbr_bs (
			(unsigned long) va_arg (ar, void *), "0123456789abcdef", count);
	}
	return (*count);
}

int	ft_printf(const char *ptr, ...)
{
	va_list		ar;
	int			i;
	int			j;
	int			count;

	j = 0;
	i = 0;
	count = 0;
	va_start (ar, ptr);
	while (ptr[i] != '\0')
	{
		if (ptr[i] != '%')
			ft_putchar (ptr[i], &count);
		else if (ptr[i] == '%')
		{
			i++;
			count = printf_utils (ptr[i], &count, ar);
		}
		i++;
	}
	va_end (ar);
	return (count);
}
