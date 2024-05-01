/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:50:40 by dmdemirk          #+#    #+#             */
/*   Updated: 2024/04/04 17:31:04 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/ft_printf.h"
#include "../../../inc/libft.h"

static void	ft_putformat(va_list *args, char format, int *counter)
{
	if (format == 'c')
		ft_putchar(va_arg(*args, int), counter);
	else if (format == 's')
		ft_putstring(va_arg(*args, char *), counter);
	else if (format == 'p')
		ft_putpointer(va_arg(*args, unsigned long long), counter);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(*args, int), counter);
	else if (format == 'u')
		ft_putunsigned(va_arg(*args, unsigned int), counter);
	else if (format == 'x' || format == 'X')
		ft_puthexadecimal(va_arg(*args, unsigned int), format, counter);
	else if (format == '%')
		ft_putstring("%", counter);
}

static void	ft_setformat(va_list *args, const char *string, int *counter)
{
	int	index;

	index = 0;
	while (string[index])
	{
		if (string[index] == '%')
			ft_putformat(args, string[++index], counter);
		else
			(*counter) += write(1, &string[index], 1);
		index++;
	}
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, string);
	ft_setformat(&args, string, &counter);
	va_end(args);
	return (counter);
}
