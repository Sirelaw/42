/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 07:32:05 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/29 12:38:40 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%d",ft_strcmp(argv[1],argv[2]));
	return (0);
}

