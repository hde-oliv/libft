#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main(void)
{
	char str[90];
	char *p;
	char *p_org;

	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, 'o');
	p = ft_strrchr(str, 'o');
	printf("Org: %p | Yours: %p\n", p_org, p);

	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, 'z');
	p = ft_strrchr(str, 'z');
	printf("Org: %p | Yours: %p\n", p_org, p);

	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, '\0');
	p = ft_strrchr(str, '\0');
	printf("Org: %p | Yours: %p\n", p_org, p);

	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, 'b');
	p = ft_strrchr(str, 'b');
	printf("Org: %p | Yours: %p\n", p_org, p);

	return (0);
}
