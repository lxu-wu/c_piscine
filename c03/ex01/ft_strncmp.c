/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 07:52:41 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/16 08:47:21 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n != 0 && *s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		++s1;
		++s2;
		--n;
	}
	if (n != 0)
		return (*s1 - *s2);
	return (0);
}
