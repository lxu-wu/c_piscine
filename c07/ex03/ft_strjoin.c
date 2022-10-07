/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:23:00 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/24 19:28:53 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strl(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (i < size)
	{
		l += ft_strl(strs[i]);
		i++;
	}
	l += ft_strl(sep) * size - 1;
	if (size <= 0)
	{
		l = 1;
	}
	str = (char *)malloc(sizeof(char) * l);
	if (!(str))
	{
		return (0);
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		i3;
	int		i2;
	char	*str;

	str = ft_create_str(size, strs, sep);
	i = -1;
	i2 = 0;
	while (++i < size)
	{
		i3 = 0;
		while (strs[i][i3])
		{
			str[i2++] = strs[i][i3];
			i3++;
		}
		i3 = 0;
		while (sep[i3] && i != size - 1)
		{
			str[i2++] = sep[i3];
			i3++;
		}
	}
	str[i2] = '\0';
	return (str);
}
