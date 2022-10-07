/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:04:00 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/16 09:00:50 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	while (dest[i] != '\0')
		i++;
	i2 = 0;
	while (src[i2] != '\0')
	{
		if (i2 < n)
		{
			dest[i + i2] = src[i2];
		}
		i2++;
	}
	dest[i + i2] = '\0';
	return ([i + i2 - 1]);
}
