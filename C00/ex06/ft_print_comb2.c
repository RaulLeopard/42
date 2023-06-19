/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:19:51 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/09 13:43:57 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print2(void)
{
	int num1;
	int num2;
	char t;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			if (num1 < 10)
				write(1, " ", 1); // Espacio en blanco antes del primer dígito de num1
			t = (num1 / 10) + '0';
			write(1, &t, 1);
			t = (num1 % 10) + '0';
			write(1, &t, 1);
			write(1, " ", 1);
			t = (num2 / 10) + '0';
			write(1, &t, 1);
			t = (num2 % 10) + '0';
			write(1, &t, 1);
			if (!((num1 == 98) && (num2 == 99)))
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

int main()
{
	ft_print2();
	return 0;
}