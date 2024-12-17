/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:00:45 by mgrandia          #+#    #+#             */
/*   Updated: 2024/11/04 19:28:13 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb <= 1)
		return (0);
	while (i > 1 && i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			i--;
	}
	return (1);
}
/*
int	main(void)
{
	int num = 8;
	printf("el numero %d dona %d",num, ft_is_prime(num));
}
*/
