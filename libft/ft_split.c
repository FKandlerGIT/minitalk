/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:17:25 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/25 17:03:50 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static int	ft_word_count(const char *str, char symbol)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == symbol)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static char	*set_word(char **str, char symbol)
{
	int		word_length;
	char	*result_string;

	word_length = 0;
	while ((*str)[word_length] && (*str)[word_length] != symbol)
		word_length++;
	result_string = (char *)malloc((word_length + 1) * sizeof(char));
	if (!result_string)
		return (NULL);
	ft_strlcpy(result_string, *str, word_length + 1);
	(*str) = (*str) + word_length;
	return (result_string);
}

char	**ft_split(const char *str, char symbol)
{
	int		i;
	int		word_count;
	char	**result;
	char	*the_str;

	the_str = (char *)str;
	word_count = ft_word_count(str, symbol);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*the_str)
	{
		if (*the_str != symbol)
		{
			result[i] = set_word(&the_str, symbol);
			if (!result[i])
				return (free_all(result));
			i++;
		}
		else
			the_str++;
	}
	result[i] = NULL;
	return (result);
}
