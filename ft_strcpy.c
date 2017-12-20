/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 20:42:28 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 07:51:39 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;
	int src_l;
	int dest_l;

	i = 0;
	src_l = ft_strlen((char *)src);
	dest_l = ft_strlen(dest);
	while ((i < src_l) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= dest_l)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
