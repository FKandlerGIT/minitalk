/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:45:58 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 16:46:21 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_string;
	size_t	length;

	length = ft_strlen(str);
	new_string = (char *)malloc(length + 1);
	if (new_string == NULL)
		return (NULL);
	ft_memcpy(new_string, str, length + 1);
	return (new_string);
}
