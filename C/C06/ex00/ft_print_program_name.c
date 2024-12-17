/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:46:39 by mgrandia          #+#    #+#             */
/*   Updated: 2024/11/07 10:12:16 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	len;
	
	len = 0;
	argc = 0;
//	if (argc != 2)
//		return (-1);

	while(*argv[0] != '\0')
		len++;
	//printf("%d",len);
	write(1,argv[0] ,len);
	return(0);	
}
