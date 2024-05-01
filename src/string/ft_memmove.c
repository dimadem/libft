/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:10:59 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/19 21:17:44 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_p;
	const char	*src_p;

	if (src == dest)
		return (dest);
	dest_p = (char *)dest;
	src_p = (const char *)src;
	if (src_p < dest_p)
		while (n--)
			*(dest_p + n) = *(src_p + n);
	else
		while (n--)
			*dest_p++ = *src_p++;
	return (dest);
}
