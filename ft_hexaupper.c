/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:42:45 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/09 14:40:55 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexaupper(unsigned int i, int *ct)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (i < 16)
	{
		ft_putchar(hexa[i % 16], ct);
	}
	else
	{
		ft_hexaupper(i / 16, ct);
		ft_putchar(hexa[i % 16], ct);
	}
}
