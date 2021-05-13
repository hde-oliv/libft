#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n);

int	main(void)
{
	char str[90];
	char str_2[90];

	printf("1)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, 'x', 9);
	printf("%s\n", str);

	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, 'x', 9);
	printf("%s\n", str);

	printf("\n\n2)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, 's', 9);
	printf("%s\n", str);

	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, 's', 9);
	printf("%s\n", str);

	printf("\n\n3)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, '\'', 9);
	printf("%s\n", str);

	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, '\'', 9);
	printf("%s\n", str);

	printf("\n\n4)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, 's', 3);
	printf("%s\n", str);

	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, 's', 3);
	printf("%s\n", str);




	return(0);
}
