/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:34:26 by mgrandia          #+#    #+#             */
/*   Updated: 2024/10/29 10:02:32 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_capitalize_first(char **str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_capitalize_first(&str);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
	}
	return (str);
}
