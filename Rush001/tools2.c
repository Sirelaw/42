/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:58:41 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:36:33 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int g_a[6][6];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_int(int n)
{
	int zero_p;

	zero_p = (n % 10) + 48;
	write(1, &zero_p, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

void	ft_print_arr(int *arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		print_int(arr[i]);
		ft_putchar(' ');
		i++;
	}
}

void	print_matrix(void)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		ft_print_arr(g_a[i]+1, 4);
		ft_putchar('\n');
		i++;
	}
}
