/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:33:30 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/09 14:42:53 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexalower(unsigned int i, int *ct)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (i < 16)
	{
		ft_putchar(hexa[i % 16], ct);
	}
	else
	{
		ft_hexalower(i / 16, ct);
		ft_putchar(hexa[i % 16], ct);
	}
}
