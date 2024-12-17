/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:47:03 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/31 11:45:05 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_count(char *str)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
		if (i == size)
		{
			return (size + ft_count(src));
		}
	}
	while (src[j] != '\0' && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (ft_count(dest) < size)
		dest[i] = '\0';
	return (i);
}
/*
int     main()
{
        char dest[] = "Hola";
        char src[] = "Mundo";
	int size = 20;

        printf("%d",ft_strlcat(dest,src,size));
}*/
