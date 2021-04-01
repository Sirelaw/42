/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 05:32:50 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/31 15:34:06 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	check_negative(long a)
{
	if (a < 0)
	{
		write(1, "-", 1);
		return (a * -1);
	}
	else if (a == 0)
		write(1, "0", 1);
	return (a);
}

void	write_zeros(int nb2)
{
	while ((nb2 % 10 == 0) && (nb2 != 0))
	{
		write(1, "0", 1);
		nb2 = nb2 / 10;
	}
}

void	ft_putnbr(int nb)
{
	long	nb1;
	long	nb2;
	long	num;
	long	reverse_num;
	char	digit;

	nb1 = nb;
	nb1 = check_negative(nb1);
	nb2 = nb1;
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
	write_zeros(nb2);
}
