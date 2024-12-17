/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:39:22 by mgrandia          #+#    #+#             */
/*   Updated: 2024/11/07 11:41:07 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 1)
	{
		return (nb * (ft_recursive_power(nb, power - 1)));
	}
	return (nb);
}
/*
int	main(void)
{
	int nb = 3;
	int power = 4;

	printf("El resultado es %d", ft_recursive_power(nb, power));
}
*/
