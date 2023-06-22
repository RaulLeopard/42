/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:33:11 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 12:38:00 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_stcpy(char *dest, char *scr)
{
	char	*origen;

	origen = dest;
	while (*scr != '\0')
	{
		*dest = *scr;
		dest++;
		scr++;
	}
	*dest = '\0';
	return (origen);
}
/*int main ()
{
    char source [] = "Hola Mundo";
    char destino [20];

    ft_stcpy(destino, source);
    printf("Cadena copiada: %s\n", destino);
    return (0);
}*/
