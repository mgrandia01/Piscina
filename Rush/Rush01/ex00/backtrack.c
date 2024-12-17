/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:08:40 by cmayne-p          #+#    #+#             */
/*   Updated: 2024/10/28 17:33:03 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_row_left(char row[4]);
int	ft_check_row_right(char row[4]);
int	ft_check_col_up(char matrix[4][4], int col_numb);
int	ft_check_col_down(char matrix[4][4], int col_numb);
int	ft_write_matrix(char matrix[4][4]);

int	ft_is_valid(char matrix[4][4], int row, int col, int num)
{
	int		i;
	char	check_num;

	i = 0;
	check_num = num + '0';
	while (i < 4)
	{
		if (matrix[row][i] == check_num || matrix[i][col] == check_num)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_matrix_valid(char matrix[4][4], int inst_mat[4][4], int row, int col)
{
	int	x;
	int	y;
	int	valid;

	valid = 0;
	x = 0;
	while (row == 4 && x < 4)
	{
		if (ft_check_row_left(matrix[x]) != inst_mat[2][x])
			valid++;
		if (ft_check_row_right(matrix[x]) != inst_mat[3][x])
			valid++;
		x ++;
	}
	y = 0;
	while (col == 4 && y < 4)
	{
		if (ft_check_col_up(matrix, y) != inst_mat[0][y])
			valid++;
		if (ft_check_col_down(matrix, y) != inst_mat[1][y])
			valid++;
		y ++;
	}
	return (valid);
}

int	ft_comb(char matrix[4][4], int row, int col, int inst_mat[4][4])
{
	int	n;

	n = 1;
	if (row == 4)
	{
		if (ft_is_matrix_valid(matrix, inst_mat, row, col) == 0)
			return (ft_write_matrix(matrix));
		return (0);
	}
	if (col == 4)
		return (ft_comb(matrix, row + 1, 0, inst_mat));
	while (n <= 4)
	{
		if (ft_is_valid(matrix, row, col, n) == 0)
		{
			matrix[row][col] = n + '0';
			if (ft_is_matrix_valid(matrix, inst_mat, row, col) == 0)
				ft_comb(matrix, row, col + 1, inst_mat);
				//return (1);
			matrix[row][col] = '0';
		}
		n ++;
	}
	return (0);
}
