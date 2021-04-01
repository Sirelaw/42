/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:50:36 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/27 09:16:07 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	static	char	*temp;
	char			flag;

	flag = 'a';
	temp = dest;
	while (flag == 'a')
	{
		if (*src == '\0')
			flag = *src;
		*dest = *src;
		dest++;
		src++;
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
	
	printf("Source = %s\n", src);
	printf("Destination = %s\n", ft_strcpy(dest, src));
	
	return (0);
}