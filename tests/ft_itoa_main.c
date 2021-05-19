#include <stdio.h>
#include "libft.h"

int main(void)
{
	int i;
	char *p;

	i = 758;
	p = ft_itoa(i);
	printf("%s\n", p);

	i = -758;
	p = ft_itoa(i);
	printf("%s\n", p);

	i = INT_MAX;
	p = ft_itoa(i);
	printf("%s\n", p);

	i = INT_MIN;
	p = ft_itoa(i);
	printf("%s\n", p);

	i = 0;
	p = ft_itoa(i);
	printf("%s\n", p);

	i = -0;
	p = ft_itoa(i);
	printf("%s\n", p);

	return (0);
}
