/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 04:13:49 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 08:03:06 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str1, char *str2, size_t n)
{
	size_t i;

	i = ft_strlen(str2);
	if (*str2 == '\0')
		return (str1);
	while (*str1 != '\0' && n >= i)
	{
		if (*str1 == *str2 && ft_memcmp(str1, str2, i) == 0)
			return (str1);
		str1++;
		n--;
	}
	return (NULL);
}
