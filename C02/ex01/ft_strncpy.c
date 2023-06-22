/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:37:39 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:30:37 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*origen_destino;

	*origen_destino = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (origen_destino);
}
/*int main ()
{
    char source [] = "Hola CopyMundo";
    char dest [20];
    ft_strncpy (dest, source,10);
    printf ("Cadena copiada %s\n", dest);
    return (0);
}*/
