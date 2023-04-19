/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:43:00 by aapryce           #+#    #+#             */
/*   Updated: 2023/04/07 13:19:29 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlentrim(char const *str, char const *cut)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (cut[k] != '\0')
		{
			if (str[i] == cut[k])
			{
				j++;
			}
			k++;
		}
		i++;
	}
	return (i - j);
}

char	*ft_strchr(char const *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlentrim(s1, set);
	arr = (char *)(malloc(len + 1));
	if (arr == NULL)
		return (0);
	while (i < len)
	{
		if (ft_strchr(set, s1[j]) == NULL)
		{
			arr[i] = s1[j];
			i++;
		}
		j++;
	}
	arr[i] = '\0';
	return (arr);
}
