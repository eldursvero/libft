/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 03:59:19 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 04:12:42 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t len_dest;
	size_t len_src;

	i = 0;
	len_dest = (size_t)ft_strlen(dest);
	len_src = (size_t)ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		return (size + len_src);
	while (src[i] != '\0' && (len_dest + 1 + i) < size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
