/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:20:02 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:14:34 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem_location, int value, size_t num)
{
	unsigned char	v;
	size_t			i;
	unsigned char	*loc;

	loc = mem_location;
	v = (unsigned char)value;
	i = 0;
	while (i < num)
	{
		loc[i] = v;
		i++;
	}
	return (mem_location);
}
