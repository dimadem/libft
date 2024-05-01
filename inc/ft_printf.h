/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:29:14 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/12/18 18:16:32 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_printf(const char *string, ...);
void	ft_putchar(int c, int *counter);
void	ft_putstring(const char *string, int *counter);
void	ft_putpointer(unsigned long long address, int *counter);
void	ft_putnbr(int number, int *counter);
void	ft_putunsigned(unsigned int number, int *counter);
void	ft_puthexadecimal(unsigned int input_number,
			const char format, int *counter);

#endif
