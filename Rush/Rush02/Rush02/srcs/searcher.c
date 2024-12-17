#include <stdlib.h>
#include "ft_searcher.h"

void	ft_set_candidate(int n, int x, int y, t_candidate *candidate)
{
	candidate -> x = x;	
	candidate -> y = y;	
	candidate -> n = n;	
}

t_candidate	*ft_all_boxes( int	**matrix)
{
	int			x;
	int			y;
	int			n;
	t_candidate *best;

	x = 0;
	y = 0;
	best = (t_candidate *) malloc(sizeof(t_candidate));	
	ft_set_candidate(0, 0, 0,best);
	while(matrix[x][y] != -1)
	{
		while(matrix[x][y] != -1)	
		{
			if (matrix[x][y] == 1)
			{
				y++;
				continue ;
			}
			n = ft_recursive(1, x, y, matrix);	
			if (n > best-> n )
			{
				ft_set_candidate(n, x, y, best);
			}
			
			y++;
		}
		x++;
	}
	return (best);
}

int	ft_recursive(int n, int x, int y, int **matrix)
{
	int i;
	int j;

	i=0;
	j=0;

		while (i < n )
		{
			j=0;
			while (j < n )
			{
				if ((matrix[x + i][y + j] == -1) || (matrix[x + i][y + j] == 1))
					return (n - 1);
				j++;
			}	
			i++;
		}
		return ft_recursive(n + 1, x, y, matrix);
		
}
