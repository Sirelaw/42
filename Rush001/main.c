/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 23:23:44 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:34:46 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

extern int g_a[6][6];

int		main(int argc, char **argv)
{
	if ((argc != 2) || !(pre_validation(argv[1])))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (post_validation(atoi(argv[1])))
		build_matrix(atoi(argv[1]));
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	init_fill();
	if (check_solution())
		print_matrix();
	else
		ft_putstr("Error\n");
}

void	init_fill(void)
{
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 1;
		while (j <= 4)
		{
			edge_clue_init(g_a[j]);
			ft_rev_int_tab(g_a[j], 6);
			edge_clue_init(g_a[j]);
			ft_rev_int_tab(g_a[j], 6);
			j++;
		}
		transpose();
		i++;
	}
	itr_solver();
}

void	itr_solver(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 1;
		while (j <= 4)
		{
			fill_a_spot(g_a[j]);
			j++;
		}
		contrad_fill();
		j = 1;
		while (j <= 4)
		{
			pattern_match(g_a[j]);
			ft_rev_int_tab(g_a[j], 6);
			pattern_match(g_a[j]);
			ft_rev_int_tab(g_a[j], 6);
			j++;
		}
		transpose();
		i++;
	}
}
