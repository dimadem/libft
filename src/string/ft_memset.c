/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:45:44 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/01 18:13:27 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*result;
	unsigned char	symbol;

	result = (unsigned char *)s;
	symbol = (unsigned char )c;
	while (0 < n)
	{
		*result = symbol;
		n--;
		result++;
	}
	return (s);
}
