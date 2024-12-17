#include <stdio.h>
#include <stdlib.h>
#include "ft_searcher.h"

int test_3_3_obstacle();
int	ft_recursive(int n, int x, int y, int **matrix);
int test_complete();
int	test_print_matrix();
int	test_read_ff();
int	test_parse_from_file();

int	main(void)
{
//	test_3_3_obstacle();
	// test_complete();
	// test_print_matrix();
	// if (test_read_ff() != 0)
	// 	printf("Error\n");

	 test_parse_from_file();
	return (0);
}

int test_3_3_full()
{
	int res;
	int first[4]= {0,0,0,-1};	
	int second[4] = {0,0,0,-1};
	int third[4] = {0, 0, 0, -1};
	int fourth[4] = {-1, -1, -1 ,-1};
	int **matrix;
	matrix = (int **) malloc(sizeof(int) * 16);
	if(!matrix)
		return (-1);

	*matrix = first;
	*(matrix +1) = second;
	*(matrix +2) = third;
	*(matrix +3) = fourth;

	res = ft_recursive(1,0,0,matrix);
	printf("Respose %d\n", res);
	return (0);
}

int test_3_3_obstacle()
{
	int res;
	int first[4]= {0,0,0,-1};	
	int second[4] = {0,1,0,-1};
	int third[4] = {0, 0, 0, -1};
	int fourth[4] = {-1, -1, -1 ,-1};
	int **matrix;
	matrix = (int **) malloc(sizeof(int) * 16);
	if(!matrix)
		return (-1);

	*matrix = first;
	*(matrix +1) = second;
	*(matrix +2) = third;
	*(matrix +3) = fourth;

	res = ft_recursive(1,0,0,matrix);
	printf("Respose %d\n", res);
	return (0);
}



int test_complete()
{
	t_candidate *res;
	int first[4]= {1,0,0,-1};	
	int second[4] = {0,0,0,-1};
	int third[4] = {0, 0, 0, -1};
	int fourth[4] = {-1, -1, -1 ,-1};
	int **matrix;
	matrix = (int **) malloc(sizeof(int) * 16);
	if(!matrix)
		return (-1);

	*matrix = first;
	*(matrix +1) = second;
	*(matrix +2) = third;
	*(matrix +3) = fourth;

	res = ft_all_boxes(matrix);

	printf("response n:%d\n", res->n);
	printf("response x:%d\n", res->x);
	printf("response y:%d\n", res->y);
	return (0);
}

int	test_print_matrix()
{
	char *matrix[]={"oxoo", ".pop", "toma", "dale", NULL };	

	ft_print(matrix);
	return (0);
}

int	test_read_ff()
{
	char	*path;
	char	*res;

	printf("=== test read ff ===\n");
	path  = "./table";
	res = ft_read_file(path);
	if (!res)
		return (-1);
	printf("%s\n", res);
	return (0);
}

int	test_parse_from_file()
{
	t_parsed_map	*parsed;
	char			*path;
	char			*res;

	path  = "./table";
	res = ft_read_file(path);
	parsed = ft_parse_map(res);
	printf("Empty: %c\n", parsed->empty);
	printf("Obstacle: %c\n", parsed->obstacle);
	printf("Full: %c\n", parsed->full);
	ft_print(parsed->map);
	return (0);
}
