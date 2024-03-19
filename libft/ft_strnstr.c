/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:26:22 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:15:00 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	find_len;

	i = 0;
	if (*find == '\0')
		return ((char *)s);
	find_len = ft_strlen(find);
	while (s[i] && i <= len)
	{
		if (s[i] == find[0] && (i + find_len) <= len)
		{
			if (ft_strncmp(s + i, find, find_len) == 0)
				return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
