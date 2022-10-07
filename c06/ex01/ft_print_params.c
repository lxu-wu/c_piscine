/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:56:01 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/15 21:54:34 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	*argv[])
{
	int	i;
	int	i2;

	i = 1;
	i2 = 0;
	while (i < argc)
	{
		while (argv[i][i2])
		{
			write(1, &argv[i][i2], 1);
			i2++;
		}
		write(1, "\n", 1);
		i2 = 0;
		i++;
	}
	return (0);
}
