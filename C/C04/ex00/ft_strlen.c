/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:04:07 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/21 13:23:26 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}
/*
int	main(void)
{
	int		l;
	char	cadena [];

	cadena [] = "hola holaaaaaaa";
	l = ft_strlen(cadena);
	printf("Longitud '%s' es %d\n", cadena, l);
	return (0);
}
*/
