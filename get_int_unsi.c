/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_unsi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:34:30 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/09 16:32:11 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	get_int(int n)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	i = 0;
	while (str[i])
		i += write(1, &str[i], 1);
	return (i);
}

int	get_unsi(unsigned int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_utoa(n);
	while(str[i])
		i += write(1, &str[i], 1);
	return (i);
}
