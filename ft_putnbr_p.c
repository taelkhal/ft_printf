/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:02:54 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/08 13:52:43 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_p(unsigned int number, int *ct)
{
    if (number > 9)
	{
		ft_putnbr_p(number / 10, ct);
		ft_putchar(number % 10 + '0', ct);
	}
	else
		ft_putchar(number + '0', ct);
}
// #include <stdio.h>
// int main()
// {
//     int c = 0;
//     ft_putnbr_p(14569, &c);
//     printf ("\n%d", c);
// }