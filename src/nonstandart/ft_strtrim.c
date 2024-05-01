/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:41:54 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/15 15:58:49 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "../../inc/libft.h"

static int	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (s1 == ((void *)0) || set == ((void *)0))
		return ((void *)0);
	start = 0;
	end = 0;
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > 0 && ft_isinset(s1[end - 1], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	result = (char *)malloc(end - start + 1);
	if (result == ((void *)0))
		return ((void *)0);
	ft_memcpy(result, s1 + start, end - start);
	result[end - start] = '\0';
	return (result);
}
