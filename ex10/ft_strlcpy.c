/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:57:20 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/25 17:21:10 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char		*address_of_src;
	char		flag;
	int			ft_strlen(char *str);

	flag = 'a';
	address_of_src = src;
	while ((flag == 'a') && (size > 1))
	{
		if (*src == '\0')
			flag = *src;
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	while (size > 0)
	{
		*dest = '\0';
		dest++;
		size--;
	}
	return (ft_strlen(address_of_src));
}

int				ft_strlen(char *str)
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
