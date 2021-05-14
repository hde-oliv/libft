#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, char *little, size_t len);

int main(void)
{
	char str[90];
	char *p;
	char *p_org;

	strcpy(str, "O caseiro casou dentro da casa casada");
	p_org = strnstr(str, "cas", 10);
	p = ft_strnstr(str, "cas", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);

	p_org = strnstr(str, "casad", 10);
	p = ft_strnstr(str, "casad", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);

	p_org = strnstr(str, "casad", 35);
	p = ft_strnstr(str, "casad", 35);
	printf("Org: %p | Yours: %p\n", p_org, p);

	p_org = strnstr(str, "casad", 36);
	p = ft_strnstr(str, "casad", 36);
	printf("Org: %p | Yours: %p\n", p_org, p);

	p_org = strnstr(str, "dentro", 10);
	p = ft_strnstr(str, "dentro", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);

	p_org = strnstr(str, "", 10);
	p = ft_strnstr(str, "", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);

	p_org = strnstr(str, "dentro", 0);
	p = ft_strnstr(str, "dentro", 0);
	printf("Org: %p | Yours: %p\n", p_org, p);

	return (0);
}
