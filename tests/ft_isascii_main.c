#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	int res_org;
	int res;
	int j;

	for (char i = 0; i <= 126; i++)
	{
		res_org = isascii(i);
		res = ft_isascii(i);
		printf("%c | org = %i ; my = %i\n", i, res_org, res);
	}
	j = 127;
	res_org = isascii(j);
	res = ft_isascii(j);
	printf("DEL | org = %i ; my = %i\n", res_org, res);
	for (char i = -128; i <= 0; i++)
	{
		res_org = isascii(i);
		res = ft_isascii(i);
		printf("%c | org = %i ; my = %i\n", i, res_org, res);
	}
	return (0);
}
