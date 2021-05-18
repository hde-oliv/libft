#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
	char str[90];

	printf("1)\n");
	strcpy(str, "1234567890");
	memmove(str, &str[2], 3);
	printf("%s\n", str);
	strcpy(str, "1234567890");
	ft_memmove(str, &str[2], 3);
	printf("%s\n", str);

	printf("\n2)\n");
	strcpy(str, "1234567890");
	memmove(&str[2], str, 3);
	printf("%s\n", str);
	strcpy(str, "1234567890");
	ft_memmove(&str[2], str, 3);
	printf("%s\n", str);

	printf("\n3)\n");
	strcpy(str, "1234567890");
	memmove(str, str, 3);
	printf("%s\n", str);
	strcpy(str, "1234567890");
	ft_memmove(str, str, 3);
	printf("%s\n", str);

	return (0);
}
