/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern_match.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 23:40:17 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:40:28 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_print_arr(int *arr, int size);

static int pattern[8][6] = {
	{2,3,2,4,1,2},
	{2,3,4,1,2,2},
	{2,2,4,1,3,2},
	{2,1,4,3,2,3},
	{2,2,4,3,1,3},
	{2,3,4,2,1,3},
  {1,4,2,3,1,3},
  {1,4,3,1,2,3}
};

void assign_all(int *arr, int pattern[7][6], int n)
{
	int i;

	i = 1;
	while (i < 5)
	{
		arr[i] = pattern[n][i];
		i++;
	}
}

void	pattern_match1(int *arr)
{
  if ((arr[0] == 1) && (arr[5] == 3))
    {
      if (arr[2] == 1)
      {
        arr[3] = 3;
        arr[4] = 2;
      }   
      if (arr[2] == 3 || arr[3] == 1)
        assign_all(arr, pattern, 7);
      if (arr[2] == 2 || arr[4] == 1)
        assign_all(arr, pattern, 6);
      if (arr[4] == 1)
      {
        arr[2] = 2;
        arr[3] = 3;
      }
    }
}

void	pattern_match(int *arr)
{
	if ((arr[0] == 2) && (arr[5] == 2))
	{
		if (arr[2] == 2 || arr[4] == 1)
			assign_all(arr, pattern, 0);
		if (arr[4] == 2)
			arr[1] = 3;
		if (arr[1] == 2)
			arr[4] = 3;
    if (arr[1] == 3 && arr[3] == 1)
      assign_all(arr, pattern, 1);
  }
  if ((arr[0] == 2) && (arr[5] == 3))
	{
		if((arr[1] == 1) || arr[4] == 2)
			assign_all(arr, pattern, 3);
		if (arr[1] == 2)
			assign_all(arr, pattern, 4);
		if ((arr [1] == 3) || (arr[3] == 2))
			assign_all(arr, pattern, 5);
	}
  pattern_match1(arr);
}
