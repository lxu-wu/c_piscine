/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:44:12 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/11 10:37:41 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_c_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strslowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] += 32;
		n++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strslowcase(str);
	if (str[0] > 'a' && str[0] < 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_c_is_alpha(str[i]) && (str[i - 1] < '0'))
			str[i] -= 32;
		if (ft_c_is_alpha(str[i]) && (str[i - 1] > '9' && str[i - 1] < 'A'))
			str[i] -= 32;
		if (ft_c_is_alpha(str[i]) && (str[i - 1] > 'Z' && str[i - 1] < 'a'))
			str[i] -= 32;
		if (ft_c_is_alpha(str[i]) && str[i - 1] > 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
