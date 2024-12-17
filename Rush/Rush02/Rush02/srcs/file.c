#define MAX_BUF_LEN 1024
#include "ft_searcher.h"

char	*ft_read_file(char *path)
{
 	char    		buf[MAX_BUF_LEN];
	unsigned long	byte_len;
	char			*res;
	int				buf_len;
	int				byte_read;
	int				fd;
	char			*ptr;

	buf_len = 0;
	byte_len = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	byte_read = read(fd, buf, MAX_BUF_LEN);
	buf_len+= byte_read;
	while (byte_read > 0)
	{
		byte_read = read(fd, buf, MAX_BUF_LEN);
		buf_len+= byte_read;
	}
	if (close(fd) != 0)
		return (NULL);
	res = (char *) malloc(sizeof(char) * buf_len);
	if (!res)
		return (NULL);
	ptr = res;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);

	byte_read = read(fd, res, MAX_BUF_LEN);
	res = res + byte_read;
	while (byte_read > 0)
	{
		byte_read = read(fd, res, MAX_BUF_LEN);
		res = res + byte_read;
	}
	*res = '\0';
	return (ptr);
	
}
