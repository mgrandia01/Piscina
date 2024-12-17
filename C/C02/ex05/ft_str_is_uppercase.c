/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:15:05 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/24 11:24:27 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	char	*cadena = "dfg34";

	printf ("Resultat %d",ft_str_is_upercase(cadena));
	return (0);
}
*/
