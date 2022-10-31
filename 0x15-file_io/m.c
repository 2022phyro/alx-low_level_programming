#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buffer;
        ssize_t n, j;
        size_t i;

        buffer = malloc(sizeof(char) * 1024);
        i = 0;
        if (buffer == NULL)
                return (0);
        if (filename == NULL)
                return (0);
        n = open(filename, O_RDONLY, 600);
        if (n == -1)
                return (0);
        j = read(n, buffer, letters);
        if (j == -1)
                return (0);


        while (buffer[i] != '\0')
        {
                putchar(buffer[i]);
                i++;
        }
	free(buffer);
	close(n);
	buffer = malloc(sizeof(char) * 1024);
n = open(filename, O_RDONLY, 600);
	j = read(n, buffer, 200);
	while (buffer[i] != '\0')
        {
                putchar(buffer[i]);
                i++;
        }
        free(buffer);
	close(n);
        return (i);

}
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
