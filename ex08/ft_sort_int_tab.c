/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:37:08 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/25 15:55:38 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab,int size)
{
	int i;
	int temp;

	while (size > 1)
	{
		i = 1;
		while (i < size)
		{
			if (*tab > *(tab + i))
			{
				temp = *tab;
				*tab = *(tab + i);
				*(tab + i) = temp;
			}
			i++;
		}
		size--;
		tab++;
	}
}

int main()
{
	int i=0;
	int arr[] = {24,45};
	while (i<2)
	{
		printf("%d ", *(arr + i));
		i++;
	}
	ft_sort_int_tab(arr, 2);
	i=0;
	while (i<2)
	{
		printf("%d ", arr[i]);
		i++;
	}
}