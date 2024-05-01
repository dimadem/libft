/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:59:15 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/14 14:09:26 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *sl, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n && sl[counter]
		&& s2[counter] && sl[counter] == s2[counter])
		counter++;
	if (counter == n)
		return (0);
	return ((unsigned char)sl[counter] - (unsigned char)s2[counter]);
}
