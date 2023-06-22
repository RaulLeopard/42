/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:07:01 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:36:13 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			return (1);
		}
		str++;
	}
	return (0);
}
/*int main() {
    char cadena1[] = "1 2 3 4 5 6 5 7 8";
    int resultado1 = ft_str_is_numeric(cadena1);
    printf("%d\n", resultado1);  // Salida: 1

    char cadena2[] = "Hola Mundo";
    int resultado2 = ft_str_is_numeric(cadena2);
    printf("%d\n", resultado2);  // Salida: 0

    return 0;
}*/
