/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:59:10 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/27 09:24:05 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	static	char	*temp;
	char			flag;

	flag = 'a';
	temp = dest;
	while ((flag == 'a') && (n > 0))
	{
		if (*src == '\0')
			flag = *src;
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (temp);
}

#include <stdio.h>

int main()
{
	char src[] = "This is source";
	char dest[] = "This is destination";

	printf("Source = %s\n", src);
	printf("Destination = %s\n", dest);
	//dest = ft_strncpy(dest, src, 6);
	printf("Destination = %s\n", ft_strncpy(dest, src, 6));
	printf("Source = %s\n", src);
	
	return (0);
}