/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 05:45:56 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 10:58:05 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static int	ft_start_space(char *str)
{
	int	i;

	i = 0;
	while (ft_space(str[i]) == 1)
		i++;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*res;
	size_t	start;
	size_t	len;

	res = ft_strnew(1);
	if (s == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	if (len == 0)
		return (res);
	start = ft_start_space((char *)s);
	if (start == len)
		return (res);
	len--;
	while (ft_space((char)s[len]))
	{
		if (len == 0)
			return (res);
		len--;
	}
	len = len - start;
	res = ft_strsub(s, start, (len + 1));
	return (res);
}
