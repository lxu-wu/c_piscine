/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:55:50 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/12 17:32:17 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	while (dest[i] != '\0')
		i++;
	i2 = 0;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i + i2] = src[i2];
		i2++;
	}
	dest[i + i2] = '\0';
	return (dest);
}
