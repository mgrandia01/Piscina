#include "ft_searcher.h"

void	ft_print_line(char *line, int len)
{
	write(1, line, len);
	write(1, "\n", 1);
}

void	ft_print(char **matrix)
{
	int	line_len;	

	line_len = ft_strlen(*matrix);
	while (*matrix)
	{
		ft_print_line(*matrix, line_len);
		matrix++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return (len);
}
