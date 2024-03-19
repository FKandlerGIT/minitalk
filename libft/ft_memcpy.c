/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:57:56 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:26:09 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*i;
	const char	*j;
	size_t		c;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = (char *)dest;
	j = (const char *)src;
	c = 0;
	while (c < n)
	{
		i[c] = j[c];
		c++;
	}
	return (dest);
}
