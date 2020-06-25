/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:16:28 by enoko             #+#    #+#             */
/*   Updated: 2020/06/25 17:21:59 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
			return (0);
	if (nb <= 1)
		return (1);
	return(nb * ft_recursive_factorial(nb - 1));
}


