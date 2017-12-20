/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 03:02:42 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 03:12:33 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char*)dest;
	src1 = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if ((char)src1[i] == (char)c)
		{
			dest1[i] = src1[i];
			return (dest1 + (i + 1));
		}
		else
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (NULL);
}
