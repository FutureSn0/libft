/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:11:09 by aapryce           #+#    #+#             */
/*   Updated: 2023/04/27 13:08:14 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

static size_t	ft_len(const char *s, char c)
{
	size_t	res;

	res = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			++res;
			while (*s != '\0' && *s != c)
				++s;
		}
		else
			++s;
	}
	return (res);
}

static char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(n + 1);
	if (str == NULL)
		return (0);
	ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		len;
	char		**res;

	if (!s)
		return (0);
	i = 0;
	res = (char **)malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = 0;
			while (*s != '\0' && *s != c && ++len)
				s++;
			res[i++] = ft_strndup(s - len, len);
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}
