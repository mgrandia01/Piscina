/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:29:55 by mgrandia          #+#    #+#             */
/*   Updated: 2024/11/04 14:52:12 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		res = res * nb;
		nb = nb - 1;
	}
	return (res);
}
/*
int	main(void)
{
	int	num;

	num = 5;
	printf("El factorial de %d es %d\n", num, ft_iterative_factorial(num));
	return (0);
}*/
