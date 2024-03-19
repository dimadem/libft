/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:51:58 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/20 18:05:02 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*res;

	res = ((void *)0);
	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		res = ((char *)&s[i]);
	return (res);
}
