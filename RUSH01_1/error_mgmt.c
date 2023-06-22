/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_mgmt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caterras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:57:28 by caterras          #+#    #+#             */
/*   Updated: 2023/06/11 01:57:42 by caterras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 4

int	check_input_len( char *params)
{
	int		len;
	int		i;
	char	max;

	len = 0;
	i = 0;
	max = N + '0';
	while (params[i] != '\0')
	{
		if (params[i] >= '1' && params[i] <= max)
			len++;
		i++;
	}
	if (len == 16 && i == ((N * N * 2) - 1))
		return (0);
	else
		return (1);
}

void	print_error(void)
{
	write(1, "Error", 5);
}

int	error_ctrl(int argc, char *params)
{
	if (argc < 2)
	{
		print_error();
		return (1);
	}
	if (check_input_len(params))
	{
		print_error();
		return (1);
	}
	return (0);
}
