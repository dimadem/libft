/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:44:16 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/18 18:57:55 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *src)
{
	size_t		str_length;
	char		*dest;

	str_length = 0;
	while (src[str_length])
		str_length++;
	dest = (char *)malloc(sizeof(char) * (str_length + 1));
	if (dest == ((void *)0))
		return ((void *)0);
	str_length = 0;
	while (src[str_length])
	{
		dest[str_length] = src[str_length];
		str_length++;
	}
	dest[str_length] = '\0';
	return (dest);
}
