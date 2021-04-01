/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:34:28 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/31 19:55:24 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ptr;
	int i;
	int range;

	range = max - min;
	if (range <= 0)
	{
		ptr = 0;
		return (ptr);
	}
	if ((ptr = (int *)malloc(sizeof(*ptr) * range)))
	{
		i = 0;
		while (min < max)
		{
			ptr[i] = min;
			i++;
			min++;
		}
	}
	return (ptr);
}
