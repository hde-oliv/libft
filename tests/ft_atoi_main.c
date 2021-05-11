#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr);

int main(void)
{
	int res;
	int res_o;
	char num[50];

	strcpy(num, "\f\f\f\r\r\t\t\n\n-50");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("1) OK!\n");
	else
		printf("1) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "             +50");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("2) OK!\n");
	else
		printf("2) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "\t\t\t\t\t\t\t+40");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("3) OK!\n");
	else
		printf("3) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "\v\v\v\v\v90");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("4) OK!\n");
	else
		printf("4) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "\v\v\v\v\v90");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("4) OK!\n");
	else
		printf("4) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "--90");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("5) OK!\n");
	else
		printf("5) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "-+90");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("6) OK!\n");
	else
		printf("6) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "+-90");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("7) OK!\n");
	else
		printf("7) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "++90");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("8) OK!\n");
	else
		printf("8) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "+0");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("9) OK!\n");
	else
		printf("9) KO! Expected %d, got %d!\n", res_o, res);

	strcpy(num, "-0");

	res = ft_atoi(num);
	res_o = atoi(num);

	if (res == res_o)
		printf("10) OK!\n");
	else
		printf("10) KO! Expected %d, got %d!\n", res_o, res);
}
