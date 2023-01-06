#include <stdio.h>
#include <string.h>
char *compare(char *s1, char *s2)
{
        unsigned long int i;
        for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] < s2[i])
			return (s1);
		if (s2[i] < s1[i] || s2[i] == '\0')
			return s2;
	}
	return (s1);
                
}
int main()
{
	char *c = "m", *m = "n";
	printf("%s %d\n", c, c[0]);
	printf("%s %d\n", m, m[0]);
	printf("%s comes first", compare(m, c));
}
