/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:50:10 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 16:00:25 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** n-- makes sure that the code will loop until 'n' is equal to '0'
 ** go to specified memory block: by *dst and set´s it to zero
 */
#include "libft.h"

void	ft_bzero(void *destination, size_t length)
{
	char	*buffer;

	buffer = destination;
	while (length-- > 0)
	{
		*buffer++ = 0;
	}
}
