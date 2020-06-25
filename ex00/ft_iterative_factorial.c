/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:54:30 by enoko             #+#    #+#             */
/*   Updated: 2020/06/25 17:14:21 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int factorial;
	int i;
	 
	if  (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	factorial = nb;
	i = 1;
	while(i < nb);
	{
		factorial = nb;
		i++;
	}
	return (factorial);
} 

