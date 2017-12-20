/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseraki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 05:58:03 by dseraki           #+#    #+#             */
/*   Updated: 2017/12/20 08:19:23 by dseraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char *str, char c)
{
	int	count;
	int i;
	int flag;

	flag = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			flag = 0;
		else if (str[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		i++;
	}
	return (count);
}

static char		*ft_copy(char *str, int start, int len)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	while (i < len)
	{
		res[i] = str[start + i];
		i++;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		size;
	int		index;
	int		i;

	index = -1;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count((char *)s, c + 1)))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		size = 0;
		while (s[i] != c && s[i] != '\0')
		{
			size++;
			i++;
		}
		tab[++index] = ft_copy((char *)s, i - size, size);
	}
	tab[ft_count((char *)s, c)] = 0;
	return (tab);
}
