/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:14:46 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/29 23:19:23 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == 0)
		return (&str[0]);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if ((to_find[j + 1]) == '\0')
				return (str + (i - j));
			i++;
			j++;
		}
		if (str[i] == '\0')
			return (0);
		while ((str[i] != to_find[0]) && (str[i] != '\0'))
			i++;
	}
	return (0);
}
