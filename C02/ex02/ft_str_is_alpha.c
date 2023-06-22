/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:07:01 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:33:43 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main() {
    char cadena1[] = "HolaMundo";
    int resultado1 = ft_str_is_alpha(cadena1);
    printf("%d\n", resultado1);  // Salida: 1

    char cadena2[] = "Hola123";
    int resultado2 = ft_str_is_alpha(cadena2);
    printf("%d\n", resultado2);  // Salida: 0

    return 0;
}*/
