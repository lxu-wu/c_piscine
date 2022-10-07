/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 00:20:35 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/10 16:41:51 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len_str;

	len_str = 0;
	while (str[len_str] != '\0')
		len_str++;
	return (len_str);
}

unsigned int	ft_strlcpy(char *dest, char	*src,	unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (n);
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size <= n)
		dest[i - 1] = '\0';
	else
		dest[i] = '\0';
	return (n);
}
