#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	int res_org;
	int res;

	printf("Numbers:\n\n");
	for (char i = '0'; i <= '9'; i++)
	{
		res_org = isdigit(i);
		res = ft_isdigit(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	printf("Other Chars: (Must return KO!)\n\n");
	for (char i = '\0'; i <= '/'; i++)
	{
		res_org = isdigit(i);
		res = ft_isdigit(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	for (char i = '{'; i <= '~'; i++)
	{
		res_org = isdigit(i);
		res = ft_isdigit(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	return (0);
}
