/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:03:14 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/29 13:13:06 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest,char *src,unsigned int nb)
{
	char *dest_address;

	dest_address = dest;
	while (*dest != '\0')
		dest++;
	while ((*src != '\0') && (nb > 0))
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest_address);
}

#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "");

   ft_strncat(dest, src, 15);
  // strncat(dest, src, 3);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}