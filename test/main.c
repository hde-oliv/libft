#include "libft.h"

int main(void)
{
	char src[] = "test basic du memcpy !";
	char buff1[22];
	char *r1 = memcpy(buff1, src, 22);
	char *r2 = ft_memcpy(buff1, src, 22);

	if (r1 != r2)
		printf("Fail");
	r1 = memcpy("", src, 0);
	r2 = ft_memcpy("", src, 0);
	if (r1 != r2)
		printf("Fail");
	printf("Success!");
}
