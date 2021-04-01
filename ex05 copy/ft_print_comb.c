/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:36:48 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/20 14:13:47 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char x, char y, char z)
{
	while (x < '8')
	{
		while (y < '9')
		{
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x < '7')
				{
					write(1, ", ", 2);
				}
				z++;
			}
			z = y + 2;
			y++;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	print_comb(a, b, c);
}
