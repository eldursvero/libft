/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 03:17:19 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 07:44:37 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*u;
	unsigned char	d;
	void			*p;

	i = 0;
	d = (unsigned char)c;
	u = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)u[i] == d)
		{
			p = &u[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
