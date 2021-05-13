#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t a);

int main(void)
{
	char str[50];

	strcpy(str, "Black Metal is better than Death Metal");
	bzero(str, 12);
	for (int i = 0; i < 13; i++)
		if (str[i] == '\0')
			str[i] += 48;
	printf("%s\n", str);

	strcpy(str, "Black Metal is better than Death Metal");
	ft_bzero(str, 12);
	for (int i = 0; i < 13; i++)
		if (str[i] == '\0')
			str[i] += 48;
	printf("%s\n", str);

	return (0);
}
