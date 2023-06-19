/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:48:59 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/15 17:56:50 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimamte_div_mod(int *a, int *b)
{
	int temp = *a;
    *a = *a / *b;
	*b = temp % *b;
}

/*int main(void)
{
    int a = 10;
    int b = 2;

    ft_ultimamte_div_mod (&a, &b);
    printf ("El div es %d\n", a);
    printf ("El mod es %d\n", b);
    return (0);
}*/
