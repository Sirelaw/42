/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 21:16:56 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:36:45 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	post_validation(int *arr)
{
	int i;

	i = 0;
	while (i <= 11)
	{
		if ((arr[i] + arr[i + 4]) < 3 || (arr[i] + arr[i + 4]) > 5)
			return (0);
		if (i == 3)
			i = 8;
		else
			i++;
	}
	return (1);
}

int	pre_validation(char *str)
{
	int i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i] != '\0')
	{
		if ((i % 2 == 0) && ((str[i] < '1') || (str[i] > '4')))
			return (0);
		if ((i % 2 == 1) && (str[i] != ' '))
			return (0);
		i++;
	}
	return (1);
}
