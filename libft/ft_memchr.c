/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:47:05 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/14 14:19:36 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;
	char	*str;

	counter = 0;
	str = (char *)s;
	while (counter < n)
	{
		if (str[counter] == (char)c)
			return ((void *)&str[counter]);
		counter++;
	}
	return ((void *)0);
}
