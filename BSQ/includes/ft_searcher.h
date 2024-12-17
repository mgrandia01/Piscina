/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searcher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazzali <dazzali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:05:21 by dazzali           #+#    #+#             */
/*   Updated: 2024/11/06 08:56:57 by dazzali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SEARCHER_H
# define FT_SEARCHER_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "string.h"
typedef struct Candidate
{
	int	x;
	int	y;
	int n;
} t_candidate;

typedef struct ParsedMap
{
	int 	line_num;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
} t_parsed_map;

t_candidate	*ft_all_boxes( int	**matrix);
int	ft_recursive(int n, int x, int y, int **matrix);
void	ft_set_candidate(int n, int x, int y, t_candidate *candidate);
void	ft_print(char **matrix);
char	*ft_read_file(char *path);
t_parsed_map *ft_parse_map(char *map);
#endif
