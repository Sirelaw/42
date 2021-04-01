/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_logic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 23:36:02 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:40:49 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	edge_clue_init(int *arr)
{
	if (arr[0] == 4)
	{
		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 3;
		arr[4] = 4;
	}
	if (arr[0] == 1)
		arr[1] = 4;
	if (arr[0] == 2 && arr[5] == 3)
		arr[2] = 4;
	if (arr[0] == 1 && arr[5] == 2)
		arr[4] = 3;
}

void	fill_a_spot(int *a)
{
	int i;
	int to_fill;

	i = 0;
	to_fill = 0;
	while (i <= 4)
	{
		if (a[i] == 0)
		{
			to_fill = i;
			i++;
			while (i <= 4)
			{
				if (a[i] == 0)
					to_fill = 0;
				i++;
			}
			if (!to_fill)
				break ;
		}
		i++;
	}
	if (to_fill)
		a[to_fill] = 10 - (a[1] + a[2] + a[3] + a[4]);
}

extern int g_a[6][6];

void	is_there(int row, int col, int x, int y)
{
	int j;

	j = 1;
	while (j <= 4)
	{
		if (j == row)
		{
			j++;
			continue;
		}
		if (g_a[j][col] == x)
			g_a[row][col] = y;
		if (g_a[j][col] == y)
			g_a[row][col] = x;
		j++;
	}
}

void	contrad_fill()
{
	int i;

	i = 1;

	while (i <= 4)
	{
		if (g_a[i][0] == 1 && g_a[i][5] == 2)
		{
      is_there(i, 2, 1, 2);
      is_there(i, 3, 1, 2);
		}
		if (g_a[i][0] == 1 && g_a[i][5] == 3 && g_a[i][4] == 2)
		{
      is_there(i, 2, 1, 3);
      is_there(i, 3, 1, 3);
		}
    if ((g_a[i][0] == 2 && g_a[i][5] == 2) 
    && ((g_a[i][2] == 1 && g_a[i][3] == 4) || (g_a[i][2] == 4 && g_a[i][3] == 1)))
		{
      is_there(i, 1, 2, 3);
      is_there(i, 4, 2, 3);
		}
		i++;
	}	

}
