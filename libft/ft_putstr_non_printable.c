/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 20:47:04 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/10 13:45:25 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_non_printable(char *str, char x)
{
	int		i;
	int		c;
	char	*hex;
	int		hex_i;
	int		hex_ii;

	i = 0;
	c = 0;
	if (x == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	while (str[c] != 0)
	{
		if (str[c] < 32 || str[c] > 126)
		{
			hex_i = (unsigned char)str[c] / 16;
			hex_ii = (unsigned char)str[c] % 16;
			i += write(1, &hex[hex_i], 1);
			i += write(1, &hex[hex_ii], 1);
		}
		else
			i += write(1, &str[c], 1);
		++c;
	}
	return (i);
}
