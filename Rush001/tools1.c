/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:39:52 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:36:25 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int g_a[6][6];

void	transpose(void)
{
	int			i;
	int			j;
	int			temp;
	extern int	g_a[6][6];

	i = 0;
	while (i <= 5)
	{
		j = i + 1;
		while (j <= 5)
		{
			temp = g_a[i][j];
			g_a[i][j] = g_a[j][i];
			g_a[j][i] = temp;
			j++;
		}
		i++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int indice;
	int temp;

	i = 0;
	indice = size - 1;
	while (i <= indice)
	{
		temp = tab[i];
		tab[i] = tab[indice];
		tab[indice] = temp;
		i++;
		indice--;
	}
}

int		*atoi(char *str)
{
	static	int	arr[16];
	int			i;

	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
			arr[i / 2] = str[i] - 48;
		i++;
	}
	return (arr);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int check_solution(void)
{
    int sum;
    int i;
    int j;

    sum = 0;
    i = 1;
    j = 1;
    while (i < 5)
    {
        while (j < 5)
        {
            sum += g_a[i][j];
            j++;
        }
        j = 1;
        i++;
    }
    if (sum == 40)
        return (1);
    else
        return (0);
}
