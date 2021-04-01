/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:02:43 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/23 15:23:15 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;

	size--;
	while (size > 0)
	{
		printf("\nInside while");
		printf("%d ", *(tab + size));
		temp = *tab;
		*tab = *(tab + size);
		*(tab + size) = temp;
		tab = tab + 1;
		size = size - 2;
		printf("\nFinished while");
	}
}
