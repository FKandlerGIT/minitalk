/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:58:09 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 16:49:42 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*i;
	const char	*j;
	size_t		c;

	if (!dest && !src)
		return (NULL);
	i = (char *)dest;
	j = (const char *)src;
	if (i > j && i < j + n)
	{
		c = n;
		while (c--)
			i[c] = j[c];
	}
	else
	{
		c = 0;
		while (c < n)
		{
			i[c] = j[c];
			c++;
		}
	}
	return (dest);
}
