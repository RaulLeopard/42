/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:55:21 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:38:49 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + 'a' - 'A';
		}
		ptr++;
	}
	return (str);
}
/*int	main(void)
{
	char cadena[] = "HOLA MUNDO";
	printf("Cadena original: %s\n", cadena);

	char *cadenaMayusculas = ft_strlowcase(cadena);
	printf("Cadena en minusculas: %s\n", cadenaMayusculas);

	return (0);
}*/
