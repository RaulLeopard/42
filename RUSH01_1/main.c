/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:57:11 by rconde-m          #+#    #+#             */
/*   Updated: 2023/06/10 18:57:25 by rconde-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

#define N 4

int	error_ctrl(int argc, char *params);

int	*read_input(char c, char *params, int *arr, int j);

void	print_error(void);

int	valid_input(int *colup, int *coldn, int *rowlf, int *rowrt)
{
	int	i;
	int	err;

	i = 0;
	err = 0;
	while (i < N - 1)
	{
		if ((colup[i] - colup[i + 1]) == 0 && (colup[i] == 4 || colup[i] == 1))
			err = 1;
		if ((coldn[i] - coldn[i + 1]) == 0 && (coldn[i] == 4 || coldn[i] == 1))
			err = 1;
		if ((rowlf[i] - rowlf[i + 1]) == 0 && (rowlf[i] == 4 || rowlf[i] == 1))
			err = 1;
		if ((rowrt[i] - rowrt[i + 1]) == 0 && (rowrt[i] == 4 || rowrt[i] == 1))
			err = 1;
		i++;
	}
	if (err)
		print_error();
	return (err);
}

void print_matrix(int matrix[N][N])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			c = matrix[i][j] + '0';
			write(1, &c, 1);
			if (!(j == N - 1))
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	colup[N];
	int	coldown[N];
	int	rowleft[N];
	int	rowright[N];
//error control
	if (error_ctrl(argc, argv[1]))
		return (1);
//read and store data
	read_input('u', argv[1], colup, 0);
	read_input('d', argv[1], coldown, N * 2);
	read_input('l', argv[1], rowleft, N * 4);
	read_input('r', argv[1], rowright, N * 6);
//validación de input
	if (valid_input(colup, coldown, rowleft, rowright))
		return (1);

	int matrix [N][N];
	int i, j;
	int num = 1;

	for (i = 0; i < N, i++)
	{
		for (j = 0; j < N; j++)
		{
			matrix [i][j] = num;
			num++;
		}
	}
// comprobación
	int i;
	int j;
	i = 0;
/*	while (i < 4)
		printf("colup: %i\n", colup[i++]);
	i = 0;
	while (i < 4)
		printf("coldown: %i\n", coldown[i++]);
	i = 0;
	while (i < 4)
		printf("rowleft: %i\n", rowleft[i++]);
	i = 0;
	while (i < 4)
		printf("rowright: %i\n", rowright[i++]);
*/
//defino matriz de N x N e inicializo valores en cero
	int matrix[N][N];
	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	//printf("Matrix pos 0, 0:  %i\n", matrix[0][1]);
// imprimo matriz de ceros
//printf("Matriz de ceros:\n");
	print_matrix(matrix);
	
	

	return (0);
}
