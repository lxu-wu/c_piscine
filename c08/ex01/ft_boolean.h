/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu-wu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 07:39:33 by lxu-wu            #+#    #+#             */
/*   Updated: 2021/08/18 08:37:25 by lxu-wu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef char	t_bool;
# define	TRUE 1
# define	FALSE 0

# define	EVEN_MSG "I have an even number of arguments.\n"
# define	ODD_MSG "I have an odd number of arguments.\n"
# define	SUCCESS 0
# define	EVEN(nbr) nbr % 2 == 0
#endif
