/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:18:42 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:14:54 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length1;
	size_t	length2;

	length1 = ft_strlen(dst);
	length2 = ft_strlen(src);
	i = 0;
	if (dstsize <= length1)
		return (dstsize + length2);
	while (src[i] != '\0' && i < dstsize - length1 - 1)
	{
		dst[length1 + i] = src[i];
		i++;
	}
	dst[length1 + i] = '\0';
	return (length1 + length2);
}
