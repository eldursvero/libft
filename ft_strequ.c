/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 05:23:42 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 07:52:18 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	x;

	if (s1 == NULL || s2 == NULL)
		return (0);
	x = ft_strcmp(s1, s2);
	if (x == 0)
		return (1);
	else
		return (0);
}
