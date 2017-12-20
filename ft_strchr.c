/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 04:04:55 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 07:48:35 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	if (c == '\0')
	{
		while (str[i] != c)
			i++;
		if (str[i] == c)
		{
			p = &str[i];
			return (p);
		}
		return (NULL);
	}
	while (str[i] != c && c != '\0')
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	p = &str[i];
	return (p);
}
