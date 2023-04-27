/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:18:46 by aapryce           #+#    #+#             */
/*   Updated: 2023/04/27 16:36:39 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (src_ptr < dest_ptr)
	{
		while (i < n)
		{
			*(dest_ptr + n - 1 - i) = *(src_ptr + n - 1 - i);
			i++;
		}
	}
	else
	{
		while (i < n)
		{	
			*(dest_ptr + i) = *(src_ptr + i);
			i++;
		}
	}
	return (dest);
}
