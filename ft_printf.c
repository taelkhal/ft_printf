/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:24:35 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/08 17:22:28 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void    ft_types(va_list ap, char tp, int *ct)
{
    if (tp == 'c')
        ft_putchar(va_arg(ap, int), ct);
    else if(tp == 's')
        ft_putstr(va_arg(ap, char *), ct);
    else if (tp == 'd' || tp == 'i')
        ft_putnbr(va_arg(ap, unsigned long), ct);
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
int    ft_printf(const char *sr, ...)
{
    va_list ap;
    int ct;
    int i;

    va_start(ap, sr);
    ct = 0;
    i = 0;
    while (sr[i])
    {
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
// #include <stdio.h>
// int main()
// {
//     // char *a = "cc";
//     // ft_printf ("%d\n", 1425);
//     // ft_printf ("%s\n", "taha");
//     // ft_printf ("%c\n", 'c');
//     // ft_printf ("%i\n", 14255);
//     // ft_printf (" %p\n ", 16);
//     // ft_printf ("%%\n", '%');
//     // ft_printf("%X\n", 14);
//     // ft_printf ("%u", 1425);
//     ft_printf("%b");
// }
