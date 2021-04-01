/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:17:32 by oipadeol          #+#    #+#             */
/*   Updated: 2021/03/25 11:49:39 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	int		flag;
	char	*ft_strlowcase(char *str);

	flag = 1;
	tmp = ft_strlowcase(str);
	while (*tmp != '\0')
	{
		if (((*tmp < '0') || (*tmp > 'z')) || ((*tmp > '9') && (*tmp < 'a')))
			flag = 1;
		if (flag == 1)
		{
			if ((*tmp >= 'a') && (*tmp <= 'z'))
			{
				*tmp = *tmp - 32;
				flag = 0;
			}
			if ((*tmp >= '0') && (*tmp <= '9'))
				flag = 0;
		}
		tmp++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp != '\0')
	{
		if ((*temp >= 'A') && (*temp <= 'Z'))
			*temp = *temp + 32;
		temp++;
	}
	return (str);
}
