/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:32:46 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/31 19:57:25 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	size = max - min;
	if (size <= 0)
	{
		*range = 0;
		return (-1);
	}
	if ((*range = (int *)malloc(sizeof(int) * size)))
	{
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
	}
	else
	{
		*range = 0;
		return (-1);
	}
	return (((sizeof(range))));
}
