#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	char str[90];
	int *p;

	printf("1)\n");
	strcpy(str, "This is a string");
	p = memchr(str, 'g', 5);
	printf("%p\n", (void *)p);
	strcpy(str, "This is a string");
	p = ft_memchr(str, 'g', 5);
	printf("%p\n", (void *)p);

	printf("\n\n2)\n");
	strcpy(str, "This is a string");
	p = memchr(str, 'i', 6);
	printf("%p\n", (void *)p);
	strcpy(str, "This is a string");
	p = ft_memchr(str, 'i', 6);
	printf("%p\n", (void *)p);

	printf("\n\n3)\n");
	strcpy(str, "This is a string");
	p = memchr(str, 's', 4);
	printf("%p\n", (void *)p);
	strcpy(str, "This is a string");
	p = ft_memchr(str, 's', 4);
	printf("%p\n", (void *)p);

	printf("\n\n4)\n"); 
	strcpy(str, "This is a string"); 
	p = memchr(str, 's', 3); 
	printf("%p\n", (void *)p); 
	strcpy(str, "This is a string"); 
	p = ft_memchr(str, 's', 3); 
	printf("%p\n", (void *)p); 

	return (0);
}
