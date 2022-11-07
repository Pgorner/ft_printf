/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:22 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 17:27:55 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *noot, ...)
{
	int		i;
	int		len;

	va_list args;

	i = 0;
	len = 0;
	va_start(args, noot);
	if (ft_check_noot(const char * noot) == 0)
	while(noot[i])
	{
		if (str[i] == '%')
			len += ft_check_noot(args, noot[i + 1], noot);
		else
			len += ft_putcnoot(noot[i]);
		++i;
	}
	va_end(args);
	return(len);
}
