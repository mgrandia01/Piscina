/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:08:52 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/23 15:13:11 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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

	printf ("Resultat %d",ft_str_is_lowercase(cadena));
	return (0);
}
*/
