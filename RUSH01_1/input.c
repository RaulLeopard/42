/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caterras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:09:53 by caterras          #+#    #+#             */
/*   Updated: 2023/06/11 02:09:57 by caterras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

void	print_error(void);

int	get_lim(char c, char lim)
{
	if (c == 'u' && lim == 'L')
		return (-1);
	if ((c == 'u' && lim == 'U') || (c == 'd' && lim == 'L'))
		return (N * 2 - 1);
	if ((c == 'd' && lim == 'U') || (c == 'l' && lim == 'L'))
		return (N * 4 - 1);
	if ((c == 'l' && lim == 'U') || (c == 'r' && lim == 'L'))
		return (N * 6 - 1);
	if (c == 'r' && lim == 'U')
		return (N * 8 - 1);
	print_error();
	return (-999);
}

int	*read_input(char c, char *params, int *arr, int j)
{
	int	i;
	int	lower_limit;
	int	upper_limit;

	lower_limit = get_lim(c, 'L');
	upper_limit = get_lim(c, 'U');
	i = 0;
	while (j > lower_limit && j < upper_limit)
	{
		arr[i++] = params[j] - '0';
		j = j + 2;
	}
	return (arr);
}
