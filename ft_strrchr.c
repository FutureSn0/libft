/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:22:04 by aapryce           #+#    #+#             */
/*   Updated: 2023/04/17 16:05:42 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if (c == 0)
		return ((char *)(str + i));
	while (i > 0)
	{
		if (*(str + i - 1) == (char)c)
			return ((char *)(str + i - 1));
		i--;
	}
	if (*(str + i) == (char)c)
		return ((char *)(str + i));
	return (0);
}
