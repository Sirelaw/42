/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 08:07:23 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/29 12:35:27 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	while ((*s1 == *s2) && (n > 0))
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}

int main(int argc, char **argv)
{
	char *c;
	c = argv[3];
	int i = 0;
	i = *c - 48;
	
	printf("%d",ft_strncmp(argv[1],argv[2],i));
		
	
	return (0);
}