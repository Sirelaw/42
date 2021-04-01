/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:45:37 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/29 23:18:51 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
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
