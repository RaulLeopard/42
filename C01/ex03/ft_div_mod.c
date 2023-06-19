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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* int main(void)
{
    int a = 10;
    int b = 2;
    int div = 0;
    int mod = 0;

    ft_div_mod (a, b, &div, &mod);
    printf ("El div es %d\n", div);
    printf ("El mod es %d\n", mod);
    return (0);
}*/
