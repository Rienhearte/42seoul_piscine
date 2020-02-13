#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void ft_read(char **data, int fd)
{
	char buffer[10];
	int ret;
	unsigned int max_size;

	max_size = 0;
	while ((ret = read(fd, buffer, 4096)) > 0)
	{
		memcpy(*data, buffer, ret);
		*data += ret;
		max_size = max_size + ret;
		if (max_size > 10000000)
			printf("FILE TOOBIG!!");
			return ;
	}
}

ft_s(int x, int y)
{
	return (x + 10 * y);
}

int main()
{
	int fd;
	char *data;;
	char buffer[10];
	int ret;
	char *head;

	char arr1[100]
	char arr2[10][10]

	arr1[ft_s(x,y)] == arr2[x][y]

	data = malloc(sizeof(char) * 10000);
	fd = open("numbers.dict", O_RDONLY);
	printf("%d\n", fd);
	ft_read(&data, fd);
	printf("%s\n", data);
	return (0);
}
