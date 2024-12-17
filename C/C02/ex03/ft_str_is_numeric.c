/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:37:14 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/24 11:22:32 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		else
			str++;
	}
	return (1);
}
/*
int	main(void) 
{
	char	*cadena = "12465dg474";

	printf ("Resultat %d", ft_str_is_numeric(cadena));
	return (0);
}
*/
