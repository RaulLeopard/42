/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:37:37 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/21 16:53:59 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	capitalize_next;
	int	i;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capitalize_next)
			{
				str[i] -= 32;
				capitalize_next = 0;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!capitalize_next)
			{
				str[i] += 32;
			}
		}
		if (str[i] == ' ')
		{
			capitalize_next = 1;
		}
		return (str);
	}
}
/*int	main(void)
{
	char	str[];

	str[] = "hola mundo! buenos dias";
	printf("Cadena original: %s\n", str);
	ft_strcapitalize(str);
	printf("Cadena capitalizada: %s\n", str);
	return (0);
}*/
