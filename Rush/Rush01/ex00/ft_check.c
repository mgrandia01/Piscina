/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:16 by cmayne-p          #+#    #+#             */
/*   Updated: 2024/10/27 22:15:35 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_row_left(char row[4])
{
	char	val;
	int		y;
	int		result;

	val = row[0];
	result = 1;
	y = 1;
	while (y < 4)
	{
		if (row[y] > val)
		{
			val = row[y];
			result ++;
		}
		y ++;
	}
	return (result);
}

int	ft_check_row_right(char row[4])
{
	char	val;
	int		y;
	int		result;

	val = row[3];
	result = 1;
	y = 2;
	while (y >= 0)
	{
		if (row[y] > val)
		{
			val = row[y];
			result ++;
		}
		y --;
	}
	return (result);
}

int	ft_check_col_up(char matrix[4][4], int col_numb)
{
	int		x;
	int		result;
	char	col[4];

	x = 0;
	while (x < 4)
	{
		col[x] = matrix[x][col_numb];
		x ++;
	}
	result = ft_check_row_left(col);
	return (result);
}

int	ft_check_col_down(char matrix[4][4], int col_numb)
{
	int		x;
	int		result;
	char	col[4];

	x = 0;
	while (x < 4)
	{
		col[x] = matrix[x][col_numb];
		x ++;
	}
	result = ft_check_row_right(col);
	return (result);
}
