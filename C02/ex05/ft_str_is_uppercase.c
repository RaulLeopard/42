/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:03:32 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:37:15 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] >= 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	cadena1[];
	int		resultado1;
	char	cadena2[];
	int		resultado2;

	cadena1[] = "holamundo";
	resultado1 = ft_str_is_uppercase(cadena1);
	printf("%d\n", resultado1); // Salida: 1
	cadena2[] = "HOLA MUNDO";
	resultado2 = ft_str_is_uppercase(cadena2);
	printf("%d\n", resultado2); // Salida: 0
	return (0);
}*/
