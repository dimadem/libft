/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:00:14 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/19 21:39:23 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	if (dest == ((void *)0) && src == ((void *)0))
		return (dest);
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	while (0 < n)
	{
		*(temp_dest++) = *(temp_src++);
		n--;
	}
	return (dest);
}
