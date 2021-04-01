/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 21:10:19 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/31 15:32:49 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sign(int sign, int nbr)
{
	if (sign % 2 != 0)
		return (nbr * -1);
	return (nbr);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 0;
	while ((*str == 32) || ((*str > 8) && (*str < 16)))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		nbr = (nbr * 10) + (*str - 48);
		str++;
	}
	return (check_sign(sign, nbr));
}
