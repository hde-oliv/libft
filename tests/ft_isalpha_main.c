#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int res_org;
	int res;

	printf("Lower characters:\n\n");
	for (char i = 'a'; i <= 'z'; i++)
	{
		res_org = isalpha(i);
		res = ft_isalpha(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	printf("Upper characters:\n\n");
	for (char i = 'A'; i <= 'Z'; i++)
	{
		res_org = isalpha(i);
		res = ft_isalpha(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	printf("Special Chars: (Must return KO!)\n\n");
	for (char i = '\0'; i <= '@'; i++)
	{
		res_org = isalpha(i);
		res = ft_isalpha(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	for (char i = '['; i <= '`'; i++)
	{
		res_org = isalpha(i);
		res = ft_isalpha(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	for (char i = '{'; i <= '~'; i++)
	{
		res_org = isalpha(i);
		res = ft_isalpha(i);
		if (res_org && res)
			printf("%c : OK!\n", i);
		else
			printf("%c : KO!\n", i);
	}
	return (0);
}
