/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:17:39 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:14:47 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_putchar(char c)

{
	write(1, &c, 1);
}*/

char	*ft_strchr(const char *str, char letter)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)letter)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == (char)letter)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
