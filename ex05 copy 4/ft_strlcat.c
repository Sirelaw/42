/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:45:37 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/29 23:09:13 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest,char *src,unsigned int size)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while ((*src != '\0') && (size > 1))
	{
		dest[i] = *src;
		i++;
		src++;
		size--;
	}
	dest[i] = '\0';
	return (i);
}

#include <string.h>
#include <stdio.h>

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "iuytrfrfdr");

  // strncat(dest, src, 3);

   printf("Final destination lenght is: |%d\n|", ft_strlcat(dest, src, 50));
   printf("Final destination lenght is: |%s\n|", dest);
   
   
   return(0);
}