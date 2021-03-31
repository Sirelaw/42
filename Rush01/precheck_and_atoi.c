/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precheck_and_atoi.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 07:33:55 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/27 13:30:25 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*precheck_and_atoi(char *str)
{
	int			*error_pointer;
	int			error;
	static	int	arr[16];
	int			i;
	int			check_len(char *str);
	int			check_space_and_digits(char *str);

	i = 0;
	error = 84;
	error_pointer = &error;
	if (check_len(str) == 84)
		return (error_pointer);
	if (check_space_and_digits(str) == 84)
		return (error_pointer);
	while (i < 32)
	{
		if (i % 2 == 0)
			arr[i / 2] = str[i] - 48;
			i++;
	}
	return (arr);
}

int	check_len(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len == 31)
		return (1);
	else
		return (84);
}

int	check_space_and_digits(char *str)
{
	int i;

	i = 0;
	while (i < 32)
	{
		if ((i % 2 == 0) && ((str[i] < '1') || (str[i] > '4')))
			return (84);
		if ((i % 2 == 1) && (str[i] != ' '))
			return (84);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main (int argc,char **argv)
{
	int *pointer;
	char str[] = "3 2 4 2 4 2 "

	if (argc != 1)
		return (76);

	pointer = precheck_and_atoi(argv[0]);
	if (*pointer == 76)
		//write error;
		return (0);
}
