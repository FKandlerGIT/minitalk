/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:19:00 by fkandler          #+#    #+#             */
/*   Updated: 2023/12/08 15:33:40 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_digit(long number, int base, const char *symbols)
{
	int		count;
	long	n;

	count = 0;
	if (number < 0)
	{
		if (write(1, "-", 1) == -1)
		{
			return (-1);
		}
		n = -number;
		return (print_digit((unsigned long)n, base, symbols) + 1);
	}
	else if (number < base)
	{
		return (print_char(symbols[number]));
	}
	else
	{
		count = print_digit(number / base, base, symbols);
		return (count + print_digit(number % base, base, symbols));
	}
}
