/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 01:57:00 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/24 18:58:53 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_in_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

void	ft_print(unsigned int n, char *base, unsigned int s)
{
	if (n > s - 1)
	{
		ft_print(n / s, base, s);
		n %= s;
	}
	ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = -1;
	while (base[++s])
		if (base[s] == '+' || base[s] == '-' || base[s] == ' '
			|| ft_in_base(base[s], base + s + 1)
			|| (base[s] >= 9 && base[s] <= 13))
			return ;
	if (s < 2)
		return ;
	if (nbr < 0)
	{	
		ft_putchar('-');
		ft_print(-nbr, base, s);
	}
	else
		ft_print(nbr, base, s);
}
