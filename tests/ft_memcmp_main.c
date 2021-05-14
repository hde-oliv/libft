#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	char str[90];
	char str_2[90];
	int res;
	int res_org;

	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 17);
	res = ft_memcmp(str, str_2, 17);
	printf("Org: %i | Yours: %i\n", res_org, res);

	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 16);
	res = ft_memcmp(str, str_2, 16);
	printf("Org: %i | Yours: %i\n", res_org, res);

	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 18);
	res = ft_memcmp(str, str_2, 18);
	printf("Org: %i | Yours: %i\n", res_org, res);

	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 25);
	res = ft_memcmp(str, str_2, 25);
	printf("Org: %i | Yours: %i\n", res_org, res);

	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 7);
	res = ft_memcmp(str, str_2, 7);
	printf("Org: %i | Yours: %i\n", res_org, res);

	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 500);
	res = ft_memcmp(str, str_2, 500);
	printf("Org: %i | Yours: %i\n", res_org, res);

	return(0);
}
