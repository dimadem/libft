/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:28:38 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/19 16:55:05 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_length;

	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (size > 0)
	{
		while (size > 1 && *src != '\0')
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	return (src_length);
}
