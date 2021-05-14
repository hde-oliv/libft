#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main(void)
{
	char str[90];
	char *p;
	char *p_org;

	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, 'y');
	p = ft_strchr(str, 'y');
	printf("Org: %p | Yours: %p\n", p_org, p);

	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, 'z');
	p = ft_strchr(str, 'z');
	printf("Org: %p | Yours: %p\n", p_org, p);

	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, '\0');
	p = ft_strchr(str, '\0');
	printf("Org: %p | Yours: %p\n", p_org, p);

	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, 'b');
	p = ft_strchr(str, 'b');
	printf("Org: %p | Yours: %p\n", p_org, p);

	return (0);
}
