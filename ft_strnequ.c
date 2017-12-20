/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 05:29:04 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 05:32:43 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	x;

	if (n == 0)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	x = ft_strncmp(s1, s2, n);
	if (x == 0)
		return (1);
	else
		return (0);
}
