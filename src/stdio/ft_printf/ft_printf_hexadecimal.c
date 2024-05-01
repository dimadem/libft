/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:51:08 by dmdemirk          #+#    #+#             */
/*   Updated: 2024/04/04 17:29:26 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/ft_printf.h"
#include "../../../inc/libft.h"

void	ft_puthexadecimal(unsigned int input_number,
				const char format, int *counter);
static void	ft_print_hexadecimal(unsigned int input_number, const char format);
static void	ft_hexlen(unsigned int input_number, int *counter);

static void	ft_hexlen(unsigned int input_number, int *counter)
{
	while (input_number != 0)
	{
		input_number = input_number / 16;
		(*counter)++;
	}
}

static void	ft_print_hexadecimal(unsigned int input_number, const char format)
{
	if (input_number >= 16)
	{
		ft_print_hexadecimal(input_number / 16, format);
		ft_print_hexadecimal(input_number % 16, format);
	}
	else
	{
		if (input_number <= 9)
			ft_putchar_fd((input_number + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((input_number - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((input_number - 10 + 'A'), 1);
		}
	}
}

void	ft_puthexadecimal(unsigned int input_number,
				const char format, int *counter)
{
	if (input_number == 0)
		(*counter) += write(1, "0", 1);
	else
		ft_print_hexadecimal(input_number, format);
	ft_hexlen(input_number, counter);
}
