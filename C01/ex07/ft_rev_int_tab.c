/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:45:06 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/19 09:45:26 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

 void ft_rev_int_tab(int *tab, int size)
{
    int inicio;
    int fin;
    int aux;

    inicio = 0;
    fin = size - 1;
    while (inicio < fin)
    {
        aux = tab [inicio];
        tab [inicio] = tab [fin];
        tab[fin] = aux;
        inicio++;
        fin--;
    }
}

int main(void)
{
   int size = 8;
   int ini = 0;
   int tab[] = {0, 2, 5, 6, 8, 9, 12, 21};
   ft_rev_int_tab(tab, size);
   while (ini < size) 
   {
        printf("%d",tab[ini]);
        ini++;
   }
    
    return (0);
}
