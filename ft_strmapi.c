/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:20:28 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/18 19:01:46 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (f)(unsigned int, char))
{
	size_t	counter;
	size_t	length;
	char	*result;

	if (!s)
		return ((void *)0);
	length = ft_strlen(s);
	result = (char *)malloc(length + 1);
	if (!result)
		return ((void *)0);
	counter = 0;
	while (counter < length)
	{
		result[counter] = f(counter, s[counter]);
		counter++;
	}
	result[counter] = '\0';
	return (result);
}
