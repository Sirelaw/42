/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:42:37 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/29 23:18:19 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *dest_address;

	dest_address = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (dest_address);
}
