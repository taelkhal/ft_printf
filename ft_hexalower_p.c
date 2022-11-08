/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:06 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/08 17:16:07 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_hexalower_p(unsigned long i, int *ct)
{
    char *hexa;

    hexa = "0123456789abcdef";
    if (i < 16)
        ft_putchar(hexa[i % 16], ct);
    else
    {
        ft_hexalower_p(i / 16, ct);
        ft_putchar(hexa[i % 16], ct);
    }
}