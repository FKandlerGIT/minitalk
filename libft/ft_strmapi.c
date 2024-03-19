/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:21:05 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:14:58 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			j;
	char			*result;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	result = (char *)malloc(i + 1);
	if (result == 0)
	{
		return (0);
	}
	while (j < i)
	{
		result[j] = f(j, s[j]);
		j++;
	}
	result[i] = '\0';
	return (result);
}
