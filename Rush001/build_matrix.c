/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:58:20 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:35:18 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**	This function will take a pointer to the 1x16 array from atoi
**	and modify the global 6x6 array "g_a" accordingly to correctly
**	prefill all the corners and edges before further calculations.
*/

int	g_a[6][6] = {
	{ 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 0, 0}};

void	build_matrix(int *a)
{
	int c[3];

	c[0] = 0;
	c[1] = 0;
	c[2] = 1;
	while (c[0] <= 15)
	{
		if (c[0] <= 7)
			g_a[(c[1])][c[0] + c[2]] = a[c[0]];
		if (c[0] > 7)
			g_a[c[0] + c[2]][c[1]] = a[c[0]];
		if (c[0] == 3)
			c[2] = -3;
		if (c[0] == 3 || c[0] == 11)
			c[1] = 5;
		if (c[0] == 7)
		{
			c[1] = 0;
			c[2] = -7;
		}
		if (c[0] == 11)
			c[2] = -11;
		c[0]++;
	}
}
