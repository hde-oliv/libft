#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	int res_org;
	int res;

	for (char i = 0; i <= 126; i++)
	{
		res_org = isalnum(i);
		res = ft_isalnum(i);
		printf("%c | org = %i ; my = %i\n", i, res_org, res);
	}
	for (char i = -128; i <= 0; i++)
	{
		res_org = isalnum(i);
		res = ft_isalnum(i);
		printf("%c | org = %i ; my = %i\n", i, res_org, res);
	}
	return (0);
}
