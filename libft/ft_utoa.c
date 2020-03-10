/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:04:12 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/10 16:01:44 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_int(unsigned int n)
{
	int	counter;

	counter = 0;
	while (n > 9)
	{
		n = n / 10;
		++counter;
	}
	return (counter);
}

static char	*ft_check_utoa(char *array, unsigned int n, int co_numb)
{
	int		mod;
	char	*aux;

	aux = array;
	if (n > 9)
		ft_check_utoa(array, n / 10, co_numb - 1);
	mod = (n % 10) + 48;
	aux[co_numb] = mod;
	return (array);
}

char		*ft_utoa(unsigned int n)
{
	int		co_numb;
	char	*array;

	co_numb = ft_count_int(n);
	array = malloc(sizeof(char) * (co_numb + 2));
	if (array == 0)
		return (0);
	ft_check_utoa(array, n, co_numb);
	array[co_numb + 1] = 0;
	return (array);
}
