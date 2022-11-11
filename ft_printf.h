/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:05:48 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/09 15:20:24 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *ct);
void	ft_putstr(char *str, int *ct);
void	ft_putnbr(int n, int *ct);
void	ft_hexaupper(unsigned int i, int *ct);
void	ft_hexalower(unsigned int i, int *ct);
void	ft_putnbr_p(unsigned int number, int *ct);
void	ft_hexalower_p(unsigned long i, int *ct);
int		ft_printf(const char *sr, ...);

#endif
