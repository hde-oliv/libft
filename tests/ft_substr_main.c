#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
	char str[90];
	char *p;

	strcpy(str, "French isn't that bad, ok!");
	p = ft_substr(str, 7, 5);
	printf("%s\n", p);
	free(p);
	return (0);
}
