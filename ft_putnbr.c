/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:15:53 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/09 13:01:01 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *ct)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-', ct);
		number = number * -1;
	}
	if (number > 9)
	{
		ft_putnbr(number / 10, ct);
		ft_putchar(number % 10 + '0', ct);
	}
	else
		ft_putchar(number + '0', ct);
}
