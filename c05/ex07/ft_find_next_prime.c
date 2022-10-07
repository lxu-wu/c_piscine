/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 22:34:42 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/24 08:35:32 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb != 3 && nb != 5)
	{
		if (nb < 2 || nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
			return (0);
	}
	i = 7;
	while (i <= nb / i)
	{
		if ((nb % i) == 0 && i != 1)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	if (nb <= 2)
		return (2);
	else if (nb == 3 || nb == 5)
		return (nb);
	while (ft_is_prime(nb) != 1)
	{
		if (nb % 2 == 0)
			nb--;
		nb += 2;
	}
	return (nb);
}
