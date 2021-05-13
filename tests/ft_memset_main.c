#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n);

int main(void)
{
	char str[90];

	strcpy(str, "Final Fantasy is shit!");
	memset(str, 'a', 13);
	printf("%s\n", str);

	strcpy(str, "Final Fantasy is shit!");
	ft_memset(str, 'a', 13);
	printf("%s\n", str);

	return (0);
}
