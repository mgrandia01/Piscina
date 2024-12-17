/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:20:56 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/22 11:50:38 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab [i + 1])
			i++;
		else
		{
			swp = tab [i];
			tab [i] = tab [i + 1];
			tab [i + 1] = swp;
			i = 0;
		}
	}
}
