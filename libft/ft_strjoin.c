/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:18:27 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:30:16 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	forwardprefix(const char *input, char *output, int length)
{
	while (length > 0)
	{
		*output++ = *input++;
		length--;
	}
}

static void	backwardsuffix(const char *input, char *output, int length)
{
	input += ft_strlen(input) - length;
	while (length > 0)
	{
		*output++ = *input++;
		length--;
	}
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*result;
	size_t	length1;
	size_t	length2;

	if (!str1 && !str2)
		return (NULL);
	if (str1 != NULL)
		length1 = ft_strlen(str1);
	else
		length1 = 0;
	if (str2 != NULL)
		length2 = ft_strlen(str2);
	else
		length2 = 0;
	result = (char *)malloc(length1 + length2 + 1);
	if (!result)
		return (NULL);
	forwardprefix(str1, result, length1);
	backwardsuffix(str2, result + length1, length2);
	result[length1 + length2] = '\0';
	return (result);
}
