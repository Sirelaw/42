/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:32:04 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/22 11:11:57 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	check_negative(long a)
{
	if (a < 0)
	{
		a = a * -1;
		write(1, "-", 1);
		return (a);
	}
	else
	{
		if (a == 0)
			write(1, "0", 1);
		return (a);
	}
}

void	ft_putnbr(int nb)
{
	long	nb1;
	long	num;
	long	reverse_num;
	char	digit;

	nb1 = nb;
	nb1 = check_negative(nb1);
	reverse_num = 0;
	while (nb1 > 0)
	{
		num = nb1 % 10;
		reverse_num = (reverse_num * 10) + num;
		nb1 = nb1 / 10;
	}
	nb1 = reverse_num;
	while (nb1 > 0)
	{
		num = nb1 % 10;
		digit = '0' + num;
		write(1, &digit, 1);
		nb1 = nb1 / 10;
	}
}
