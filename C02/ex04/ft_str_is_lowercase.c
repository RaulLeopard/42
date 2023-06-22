/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:03:32 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:36:51 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] >= 'z')
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
	resultado1 = ft_str_is_lowercase(cadena1);
	printf("%d\n", resultado1); // Salida: 1
	cadena2[] = "HolaMundo";
	resultado2 = ft_str_is_lowercase(cadena2);
	printf("%d\n", resultado2); // Salida: 0
	return (0);
}*/
