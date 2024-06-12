#include "bsq.h"
#define INITIAL_BUFFER_SIZE 1042

struct		var1
{
	int		fd;
	char	*buffer;
	char	*temp;
	ssize_t	bytesRead;
	ssize_t	totalBytesRead;
	ssize_t	bufferSize;
}			var;

char	*map_input(char *filename)
{
	var.totalBytesRead = 0;
	var.bufferSize = INITIAL_BUFFER_SIZE;
	var.fd = open(filename, O_RDONLY);
	if (var.fd == -1)
		return (0);
	var.buffer = (char *)malloc(var.bufferSize);
	if (!var.buffer)
	{
		close(var.fd);
		return (0);
	}
	while ((var.bytesRead = read(var.fd, var.buffer + var.totalBytesRead,
				var.bufferSize - var.totalBytesRead - 1)) > 0)
	{
		var.totalBytesRead += var.bytesRead;
		if (var.totalBytesRead >= var.bufferSize - 1)
		{
			var.bufferSize *= 2;
			var.temp = (char *)realloc(var.buffer, var.bufferSize);
			var.buffer = var.temp;
		}
	}
	var.buffer[var.totalBytesRead] = '\0';
	close(var.fd);
	return (var.buffer);
}