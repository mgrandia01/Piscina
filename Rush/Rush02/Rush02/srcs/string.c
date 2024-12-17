#include <stdlib.h>
#include "ft_searcher.h"

char	*ft_strndup(char *src, unsigned int n);
int		ft_is_separator(char c, char *charset);
char	**ft_split(char *str, char *charset);
void	ft_split_str(char *str, char **ptr, char *charset);

void	ft_split_str(char *str, char **ptr, char *charset)
{
	int		was_separator;
	char	*begin;

	begin = str;
	was_separator = 1;
	while (*str)
	{
		if (ft_is_separator(*str, charset) && !was_separator)
		{
			*(ptr++) = ft_strndup(begin, str - begin);
			was_separator = 1;
		}
		else if (was_separator && !(ft_is_separator(*str, charset)))
		{
			begin = str;
			was_separator = 0;
		}
		str++;
	}
	if (!was_separator)
		*(ptr++) = ft_strndup(begin, str - begin);
	*ptr = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;	

	result = (char **) malloc((ft_strlen(str) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!(*charset))
	{
		*result = ft_strndup(str, ft_strlen(str));
		*(result + 1) = NULL;
		return (result);
	}
	if (!*str)
	{
		*result = NULL;
		return (result);
	}
	ft_split_str(str, result, charset);
	return (result);
}

char	*ft_strndup(char *src, unsigned int n)
{
	unsigned int		i;
	char				*ptr;
	char				*res;

	i = 0;
	res = (char *) malloc(sizeof(char) * (n + 1));
	ptr = res;
	while (*src && i < n)
	{
		*(ptr + i) = *src;
		src++;
		i++;
	}
	*(ptr + i) = '\0';
	return (res);
}

int	ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
		{
			return (1);
		}
		charset++;
	}
	return (0);
}

