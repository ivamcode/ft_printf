/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:10:50 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/10 13:56:50 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*static int	check_type(const char *fmt, va_list ap)
*{
*	return (i);
}*/

int			ft_printf(const char *fmt, ...)
{
	int		i;
	int		c;
	va_list	ap;

	va_start(ap, fmt);
	i = 0;
	c = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			++i;
			if (fmt[i] == 'd' || fmt[i] == 'i')
				c = c + (get_int(va_arg(ap, int)));
			else if (fmt[i] == 'u')
				c = c + (get_unsi(va_arg(ap, int)));
			else if (fmt[i] == 'x')
				c = c + (get_hex(va_arg(ap, int), 'x'));
			else if (fmt[i] == 'X')
				c = c + (get_hex(va_arg(ap, int), 'X'));
			else if (fmt[i] == 's')
				c = c + (get_str(va_arg(ap, char *)));
			else if (fmt[i] == 'c')
				c = c + (get_char(va_arg(ap, int)));
//			else if (fmt[i] == 'p')
//				c = c + (get_ptr(va_arg(ap, int)));
			else if (fmt[i] == '%')
				 c = c + (write(1, "%", 1));
			++i;
		}
		c = c + write(1, &fmt[i], 1);
		++i;
	}
	va_end(ap);
	return (c);
}
