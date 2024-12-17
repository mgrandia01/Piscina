/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:19:39 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/19 19:19:50 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_matrix(int x, int y, int dx, int dy)
{
	if (dx == 0 && (dy == 0 || dy == y - 1))
	{
		ft_putchar('o');
	}
	else if (dx == x - 1 && (dy == 0 || dy == y - 1))
	{
		ft_putchar('o');
	}
	else if (dy == 0 || dy == y - 1)
	{
		ft_putchar('-');
	}
	else if (dx == 0 || dx == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	dx;
	int	dy;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error el valor tiene que ser mayor que 0", 43);
	}
	else
	{
		dy = 0;
		dx = 0;
		while (dy < y && dx < x)
		{
			while (dx < x)
			{
				ft_print_matrix(x, y, dx, dy);
				dx++;
			}
			ft_putchar('\n');
			dy++;
			dx = 0;
		}
	}
}
