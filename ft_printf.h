/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:57:39 by aheddak           #+#    #+#             */
/*   Updated: 2021/12/02 01:38:59 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *ptr, ...);
void	ft_putchar(char c, int *count);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *str, int *count);
void	ft_putnbr_fd(int n, int *count);
void	ft_putnbr_base(int nbr, char *base, int *count);
void	ft_putnbr_bs(long nbr, char *base, int *count);

#endif
