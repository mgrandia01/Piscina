/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:01:24 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/22 11:53:31 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	inv;

	i = 0;
	while (i < (size / 2))
	{
		inv = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = inv;
		i++;
	}
}
