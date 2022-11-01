#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *data = malloc(sizeof(char) * 1024);

int infile = open(argv[1], O_RDONLY);
int infile2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 664);

	if(infile < 0)
	{
		dprintf(2, "Error: can't read from file %s", argv[1]);
		exit(98);
	}
	if (infile2 < 0)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
	}
	int k = 0, l = 0, m = EOF;
	while(infile)
	{
	   int r = read(infile, data, 1024);
	  
	       if (r <= 0)
	       {
		       if (r < 0) 
			       dprintf(2, "Invalid read");
//		       write(infile2, &m, 1);
       			break;
	        }
	write(infile2, data, r);

	}
	free(data);
	close(infile);
	close(infile2);
	return (0);
}
