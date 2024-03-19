/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:24:46 by fkandler          #+#    #+#             */
/*   Updated: 2023/12/08 14:32:01 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_printf.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// ap = argumentpointer;

int	ft_printf(const char *format, ...);
int	print_format(char sign, va_list ap);
int	print_d(long number);
int	print_digit(long num, int base, const char *symbols);
// int	print_ptr(void *ptr);
int	print_ptr(unsigned long long number, int base, const char *symbols);
int	print_str(char *str);
int	print_char(int c);
int	print_percent_sign(void);
// int	main(void);
#endif

// int	print_ptr(unsigned long long number, int base);