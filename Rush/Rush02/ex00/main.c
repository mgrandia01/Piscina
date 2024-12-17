/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:21:42 by mgrandia          #+#    #+#             */
/*   Updated: 2024/11/02 19:24:47 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int	ft_create_dic(char *buffer, char **dic);
int	ft_fill_dic(char *buffer, char **dic);

int	ft_free(char **dic, int i)
{
	if (dic[i] == NULL)
	{
		while (--i >= 0)
			free(dic[i]);
		free(dic);
		return (1);
	}
	return (0);
}

int	main(void)
{
	int	file;
	int	buffer_size;
	int	t_bytes;
	int	bytes_read;
	char	**dic;


	buffer_size = 1024;
	char buffer[buffer_size];
	t_bytes = 0;

	file = open("numbers.dict", O_RDONLY);
	
	while ((bytes_read = read(file, buffer, buffer_size - 1)) > 0)
	{
		buffer[bytes_read] = '\0';//posa sempre /0
		t_bytes += bytes_read;
		//printf("%s", buffer);
		//printf("\n bytes justos que necessitem %d", t_bytes);
	}
	
	dic = (char**)malloc(t_bytes);
	if(dic == NULL)
		return (1);

	ft_create_dic(buffer, dic);
	ft_fill_dic(buffer, dic);
	printf("dic[1]%s", dic[1]);

	close(file);
	free(dic);
	return (0);
}

int	ft_create_dic(char *buffer, char **dic)
{
	int i;
	int j;
	int aux;

	i = 0;
	aux = 0;
	while (buffer[aux] != '\0')
	{
		j = 0;
		while(buffer[aux] != ':')
		{
			if(buffer[aux] >= '0' && buffer[aux] <= '9')
			{
				//dic[i][j] = buffer[aux];
				j++;
			}
			else if(buffer[aux] != ' ')
				return (1);
			aux++;
		}
		dic[i] = (char *)malloc(j * sizeof(char));
		if (ft_free(dic, i) == 1)
			return (1);
		i++;
		j = 0;
		while(buffer[aux] != '\n')
		{
			if(buffer[aux] > 32 && buffer[aux] < 127)
			{
				//dic[i][j] = buffer[aux];
				j++;
			}
			else if(buffer[aux] != ' ')
				return (1);
			aux++;
		}
		dic[i] = (char *)malloc(j * sizeof(char));
		if (ft_free(dic, i) == 1)
			return (1);
		i++;
	}
	return (0);
}


int	ft_fill_dic(char *buffer, char **dic)
{
	int i;
	int j;
	int aux;

	i = 0;
	aux = 0;
	while (buffer[aux] != '\0')
	{
		j = 0;
		while(buffer[aux] != ':')
		{
			if(buffer[aux] >= '0' && buffer[aux] <= '9')
			{
				dic[i][j] = buffer[aux];
				j++;
			}
			else if(buffer[aux] != ' ')
				return (1);
			aux++;
		}
		i++;
		j = 0;
		while(buffer[aux] != '\n')
		{
			if(buffer[aux] > 32 && buffer[aux] < 127)
			{
				dic[i][j] = buffer[aux];
				j++;
			}
			else if(buffer[aux] != ' ')
				return (1);
			aux++;
		}
		i++;
	}
	return (0);
}
