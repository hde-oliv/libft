#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
	char str[90];
	char str_2[40];

	strcpy(str, "The lazy dog jumps over something");
	strcpy(str_2, "123456890");
	memcpy(str, str_2, 5);
	printf("%s\n", str);

	strcpy(str, "The lazy dog jumps over something");
	strcpy(str_2, "123456890");
	ft_memcpy(str, str_2, 5);
	printf("%s\n", str);

	return(0);
}
