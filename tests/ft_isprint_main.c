#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	int res_org;
	int res;
	int j;

	for (char i = 0; i <= 126; i++)
	{
		res_org = isprint(i);
		res = ft_isprint(i);
		printf("%c | org = %i ; my = %i\n", i, res_org, res);
	}
	j = 127;
	res_org = isprint(j);
	res = ft_isprint(j);
	printf("DEL | org = %i ; my = %i\n", res_org, res);
	for (char i = -128; i <= 0; i++)
	{
		res_org = isprint(i);
		res = ft_isprint(i);
		printf("%c | org = %i ; my = %i\n", i, res_org, res);
	}
	return (0);
}
