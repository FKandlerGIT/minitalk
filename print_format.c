/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:18:20 by fkandler          #+#    #+#             */
/*   Updated: 2023/12/08 15:28:04 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char sign, va_list ap)
{
	if (sign == 'c')
		return (print_char(va_arg(ap, int)));
	else if (sign == 's')
		return (print_str(va_arg(ap, char *)));
	else if (sign == 'd')
		return (print_digit(va_arg(ap, int), 10, "0123456789"));
	else if (sign == 'x')
		return (print_digit(va_arg(ap, unsigned int), 16, "0123456789abcdef"));
	else if (sign == 'X')
		return (print_digit(va_arg(ap, unsigned int), 16, "0123456789ABCDEF"));
	else if (sign == 'i')
		return (print_digit(va_arg(ap, int), 10, "0123456789"));
	else if (sign == 'p')
		return (print_ptr(va_arg(ap, unsigned long long), 16,
				"0123456789abcdef"));
	else if (sign == 'u')
		return (print_digit((long)va_arg(ap, unsigned int), 10, "0123456789"));
	else if (sign == '%')
		return (print_percent_sign());
	return (0);
}
