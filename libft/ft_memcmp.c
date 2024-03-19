/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:57:14 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:14:17 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*i;
	const unsigned char	*j;

	i = s1;
	j = s2;
	while (n-- > 0)
	{
		if (*i != *j)
		{
			return (*i - *j);
		}
		i++;
		j++;
	}
	return (0);
}
