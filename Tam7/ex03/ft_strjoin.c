/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 20:01:13 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/31 21:06:32 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int				n;
	unsigned int	i;

	n = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + n] = src[i];
		i++;
	}
	return (dest);
}

int		get_len(char **strs, char *sep, int size)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ((size - 1) * ft_strlen(sep)) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		len;

	if (size <= 0)
	{
		ret = 0;
		return (ret);
	}
	i = 0;
	len = get_len(strs, sep, size);
	if ((ret = (char *)malloc(sizeof(char) * len)))
	{
		while (i < size)
		{
			ft_strcat(ret, strs[i]);
			if (i < size - 1)
				ft_strcat(ret, sep);
			i++;
		}
		ret[len - 1] = '\0';
	}
	return (ret);
}
