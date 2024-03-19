/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent_sign.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:53:15 by fkandler          #+#    #+#             */
/*   Updated: 2023/12/08 15:13:15 by fkandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_percent_sign(void)
{
	if (write(1, "%", 1) == -1)
	{
		return (-1);
	}
	return (1);
}

/*int	main(void)
{
	return (print_percent_sign());
}*/