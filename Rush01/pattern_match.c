/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern_match.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:34:27 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/28 09:28:05 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int pattern[6][6] = {
	{2,3,2,4,1,2},
	{2,3,4,1,2,2},
	{2,2,4,1,3,2},
	{2,1,4,3,2,3},
	{2,2,4,3,1,3},
	{2,3,4,2,1,3}
}

void	pattern_match(int *arr)
{
	void assign_all(int *arr, int **pattern, int n);
	
	if (arr[0]==2) && (arr[5] == 2)
	{
		if ((arr[2] == 2) || (arr[4] == 1))
			assign_all(arr, pattern, 0);
		else if (arr[4] == 2)
			assign_all(arr, pattern, 1);
		else if (arr[1] == 2)
			assign_all(arr, pattern, 2);
		else if (arr[1] == 2)
			{
				arr[4] = 3;
				if 
			}
			
	}
	else if (arr[0]==2) && (arr[5] == 2)
	{
		if((arr[1] == 1) || arr[2] == 2)
			assign_all(arr, pattern, 3);
		else if (arr[1] == 2)
			assign_all(arr, pattern, 4);
		else if ((arr [1] == 3) || (arr[3] == 2))
			assign_all(arr, pattern, 5);
	}

}

void assign_all(int *arr, int **pattern, int n)
{
	int i;
	
	i = 1;
	while (i < 5)
	{
		arr[i] = pattern[n][i];
		i++;
	}
}
