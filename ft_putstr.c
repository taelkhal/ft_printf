/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:13:26 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/07 13:24:41 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *ct)
{
	int i;
	
	if (!str)
	{
		ft_putstr("(null)", ct);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], ct);
		i++;
	}
}
