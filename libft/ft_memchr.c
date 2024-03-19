/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:55 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:25:42 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*buffer;
	unsigned char		target;

	target = c;
	buffer = s;
	while (n-- > 0)
	{
		if (*buffer == target)
		{
			return ((void *)buffer);
		}
		buffer++;
	}
	return (NULL);
}
