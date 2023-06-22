/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:42:08 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:37:47 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int	main(void)
{
	char	cadena1[];
	int		resultado1;
	char	cadena2[];
	int		resultado2;

	cadena1[] = "hola mundo";
	resultado1 = ft_str_is_printable(cadena1);
	printf("%d\n", resultado1); // Salida: 1
	cadena2[] = "(-)014 M≤nD$";
	resultado2 = ft_str_is_printable(cadena2);
	printf("%d\n", resultado2); // Salida: 0
	return (0);
}*/
