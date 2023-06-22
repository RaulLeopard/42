/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:55:52 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/22 13:38:10 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}

/*int	main(void)
{
	char	cadena[];
	char	*cadenaMayusculas;

	cadena[] = "hola munDO";
	printf("Cadena original: %s\n", cadena);
	cadenaMayusculas = ft_strupcase(cadena);
	printf("Cadena en mayúsculas: %s\n", cadenaMayusculas);
	return (0);
}*/
