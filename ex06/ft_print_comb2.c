/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:00:10 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/22 15:44:58 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *a, char *b, char *c, char *d)
{
	char w;
	char x;
	char y;
	char z;

	w = *a;
	x = *b;
	y = *c;
	z = *d;
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if ((w < '9') || (x < '8'))
		write(1, ", ", 2);
	*d = z + 1;
}

void	print_comb(char w, char x, char y, char z)
{
	while (w <= '9')
	{
		while (x <= '9')
		{
			y = w;
			while (y <= '9')
			{
				while (z <= '9')
				{
					ft_putchar(&w, &x, &y, &z);
				}
				y++;
				z = '0';
			}
			x++;
			z = x + 1;
		}
		w++;
		x = '0';
		z = x + 1;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	print_comb(a, b, c, d);
}

int main()
 {
	 ft_print_comb2();
	 return (0);
 }