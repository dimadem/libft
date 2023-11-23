/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:22:09 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/19 12:58:32 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_length;
	size_t	s2_length;
	size_t	total_length;
	char	*s_result;

	if (!s1 || !s2)
		return ((void *)0);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	total_length = s1_length + s2_length;
	s_result = (char *)malloc((total_length + 1));
	if (s_result == ((void *)0))
		return ((void *)0);
	ft_strlcpy(s_result, s1, total_length + 1);
	ft_strlcpy(s_result + s1_length, s2, total_length + 1 - s1_length);
	return (s_result);
}
