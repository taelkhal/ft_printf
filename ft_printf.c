/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:24:35 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/10 18:58:58 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_types(va_list ap, char tp, int *ct)
{
	if (tp == 'c')
		ft_putchar(va_arg(ap, int), ct);
	else if (tp == 's')
		ft_putstr(va_arg(ap, char *), ct);
	else if (tp == 'd' || tp == 'i')
		ft_putnbr(va_arg(ap, int), ct);
	else if (tp == 'x')
		ft_hexalower(va_arg(ap, unsigned int), ct);
	else if (tp == 'X')
		ft_hexaupper(va_arg(ap, unsigned int), ct);
	else if (tp == 'p')
	{
		ft_putstr("0x", ct);
		ft_hexalower_p(va_arg(ap, unsigned long), ct);
	}
	else if (tp == 'u')
		ft_putnbr_p(va_arg(ap, unsigned int), ct);
	else if (tp == '%')
		ft_putchar('%', ct);
}

int	ft_printf(const char *sr, ...)
{
	va_list	ap;
	int		ct;
	int		i;

	va_start(ap, sr);
	ct = 0;
	i = 0;
	while (sr[i])
	{
		if (sr[i] == '%' && sr[i + 1] == '\0')
			return (ct);
		if (sr[i] == '%')
		{
			i++;
			ft_types(ap, sr[i], &ct);
		}
		else
			ft_putchar(sr[i], &ct);
		i++;
	}
	va_end(ap);
	return (ct);
}
