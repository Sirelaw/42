/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:42:25 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/23 13:51:36 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;
	
	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int main()
{
	int len;
	char strs[] = "Hello world!";
	len = ft_strlen(strs);
	printf("Lenght of string = %d", len);
}