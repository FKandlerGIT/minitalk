/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:22:08 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:18:47 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlength;
	char	*substring;

	strlength = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= strlength)
		return (ft_strdup(""));
	if (start + len > strlength)
		len = strlength - start;
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s += start, len + 1);
	return (substring);
}
