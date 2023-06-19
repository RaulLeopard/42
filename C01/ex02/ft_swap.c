/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:09:15 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/15 12:54:27 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int main(void)
{
    int a = 9;
    int b = 42;
    printf("Valor inicial %d\n", a);
    ft_swap(&a, &b);
    printf("Valor de cambio %d\n", a);
    return (0);
} */
