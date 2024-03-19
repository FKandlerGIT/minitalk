/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:46:13 by fkandler          #+#    #+#             */
/*   Updated: 2023/12/08 15:30:33 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* + strlen(adress) linie 24*/
/*   + 2  linie 23*/
#include "ft_printf.h"

int	print_p(unsigned long long number, int base, const char *symbols);

int	print_ptr(unsigned long long number, int base, const char *symbols)
{
	int	count;

	count = print_str("0x");
	count += print_p(number, base, symbols);
	return (count);
}

int	print_p(unsigned long long number, int base, const char *symbols)
{
	int	count;

	count = 0;
	if (symbols == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (number < (unsigned long long)base)
	{
		return (print_char(symbols[number]));
	}
	else
	{
		count = print_p(number / base, base, symbols);
		return (count + print_p(number % base, base, symbols));
	}
}
