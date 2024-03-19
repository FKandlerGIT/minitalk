/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:39 by fkandler          #+#    #+#             */
/*   Updated: 2023/11/21 15:14:12 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = (n == 0);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int num)
{
	int		length;
	long	n;
	char	*str;
	int		negative;

	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	negative = (num < 0);
	length = count_digits(num) + negative;
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	n = num;
	if (negative)
	{
		str[0] = '-';
		n = -(long)num;
	}
	str[length] = '\0';
	while (length-- > negative)
	{
		str[length] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
