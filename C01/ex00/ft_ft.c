/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:53:26 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/13 20:38:24 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int a;

	a = 3;
	printf("valor inicial %d\n", a);
	ft_ft(&a);
	printf("después %d\n", a);
	write (1, "42", 2);
	return (0);
}
