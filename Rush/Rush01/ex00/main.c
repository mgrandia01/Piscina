/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:33:26 by cmayne-p          #+#    #+#             */
/*   Updated: 2024/10/27 22:15:19 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_comb(char matrix[4][4], int row, int col, int inst_mat[4][4]);

void	ft_write_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_str_to_matrix(char *str, int matrix[4][4])
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	num = 0;
	while (i < 4)
	{
		num = *str - '0';
		matrix[i][j] = num;
		j++;
		if (j == 4)
		{
			j = 0;
			i++;
		}
		str += 2;
	}
}

int	ft_write_matrix(char matrix[4][4])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			write(1, &matrix[x][y], 1);
			write(1, " ", 1);
			y++;
		}
		y = 0;
		write(1, "\n", 1);
		x++;
	}
	return (1);
}

void	ft_build_matrix(char matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			matrix[i][j] = '0';
			j ++;
		}
		j = 0;
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	char		matrix[4][4];
	int			inst_mat[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_str_to_matrix(argv[1], inst_mat);
	ft_build_matrix(matrix);
	if (ft_comb(matrix, 0, 0, inst_mat) == 0)
		ft_write_error();
	return (0);
}
