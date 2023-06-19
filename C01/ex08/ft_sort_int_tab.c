/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:45:06 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/19 09:45:26 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int a;
    int b;
    int c;
    int temp;

    for (a = 0; a < size - 1; a++)
    {
        c = a;

        for (b = a + 1; b < size; b++)
        {
            if (tab[b] < tab [c])
            {
                c = b;
            }
        }
        temp = tab[a];
        tab[a] = tab[c];
        tab[c] = temp;
    }
}

/*int main() 
{
    int tab[] = {5, 2, 9, 1, 3};
    int size = sizeof(tab) / sizeof(tab[0]);
    int i;

    printf("Arreglo original: ");
    for (i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    ft_sort_int_tab(tab, size);

    printf("\nArreglo ordenado en orden ascendente: ");
    for (i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}*/