/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:44:02 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/19 21:30:32 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	substring_length;
	size_t	i;

	if (!s)
		return ((void *)0);
	substring_length = ft_strlen(s);
	if (start >= substring_length)
		return (ft_strdup(""));
	substring_length = ft_min(substring_length - start, len);
	substring = malloc(substring_length + 1);
	if (!substring)
		return ((void *)0);
	i = 0;
	while (i < substring_length)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
