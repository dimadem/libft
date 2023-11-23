/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:57:49 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/20 17:41:15 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len == 0)
		return ((void *)0);
	while (big[i] != '\0' && i + little_len <= len)
	{
		if (ft_strncmp((const char *)(big + i), little, little_len) == 0)
		{
			return ((char *)big + i);
		}
		i++;
	}
	return ((void *)0);
}
