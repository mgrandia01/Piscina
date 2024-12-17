#include "ft_searcher.h"

t_parsed_map *ft_parse_map(char *map)
{
	t_parsed_map	*parsed;
	char **			lines;
	int				line_num;

	line_num = 10;
	parsed = (t_parsed_map *) malloc(sizeof(t_parsed_map));
	lines = ft_split(map, "\n");
	lines++;
	parsed-> empty = '.';
	parsed-> obstacle = 'o';
	parsed-> full = 'x';
	parsed->map = lines;	
	return (parsed);
}

