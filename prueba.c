/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:34:27 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/09 16:43:31 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(int argc, char const *argv[])
{
	int			i;
	char		*str;
	char		c;
	int			plus;
	int			plus2;
	unsigned	numb;

	(void)argc;
	(void)argv;
	i = 10;
	c = 'd';

	if (!(str = ft_strdup("Este es el primer string de prueba.")))
		return (-1);

//	PRUEBA DE STRINGS, ENTEROS, % Y SALTO DE LÍNEA
	plus = printf("numero --> (%d)\nstring --> [%s]\n--> %%\n--> \n", i, str);
	plus2 = ft_printf("numero --> (%d)\nstring --> [%s]\n--> %%\n--> \n", i, str);
	printf(" [valor printf] --> %d\n", plus);
	ft_printf(" [valor ft_printf] --> %d\n\n", plus2);

//	PRUEBBA DE CADENA VACÍA
	plus = printf("");
	plus2 = ft_printf("");
	printf(" [valor printf] --> %d\n", plus);
	ft_printf(" [valor ft_printf] --> %d\n\n", plus2);

//	PRUEBA DE CHARS
	plus = printf("char --> {%c}\n", c);
	plus2 = ft_printf("char --> {%c}\n", c);
	printf(" [valor printf] --> %d\n", plus);
	ft_printf(" [valor ft_printf] --> %d\n\n", plus2);

//	PRUEBA DE UNSIGNED INT
	numb = 4294967295;
	plus = printf("unsigned --> %u\n", numb);
	plus2 = ft_printf("unsigned --> %u\n", numb);
	printf(" [valor printf] --> %d\n", plus);
	ft_printf(" [valor ft_printf] --> %d\n\n", plus2);

//	PRUEBA DE DIRECCIONES
	printf("direccion --> %p\n", str);
	printf("%ld\n", 0x7fb151402ae0);

	free(str);
	str = 0;
	return (0);
}
