/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 04:09:59 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 04:13:21 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*p;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			p = &str[i];
			return (p);
		}
		i--;
	}
	return (NULL);
}
