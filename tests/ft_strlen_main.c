#include "../libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[3];
	int res_org;
	int res;

	strcpy(str, "EL");
	res = ft_strlen(str);
	res_org = strlen(str);

	printf("strlen: %i, ft_strlen:%i\n, sizeof: %lu", res_org, res, sizeof(str));

	/* strcpy(str, "ELION EIECH EADIER EIECH ADONAI"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */

	/* if (res == res_org) */
	/* 	printf("2) OK!\n"); */
	/* else */
	/* 	printf("2) KO! Expected %i, got %i\n", res_org, res); */

	/* strcpy(str, "JAH SADAI TETRAGRAMMATON SADAI"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */

	/* if (res == res_org) */
	/* 	printf("3) OK!\n"); */
	/* else */
	/* 	printf("3) KO! Expected %i, got %i\n", res_org, res); */

	/* strcpy(str, "AGIOS O THEOS ISCHIROS ATHANATHOS"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */

	/* if (res == res_org) */
	/* 	printf("4) OK!\n"); */
	/* else */
	/* 	printf("4) KO! Expected %i, got %i\n", res_org, res); */

	/* strcpy(str, "AGLA AMEN"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */

	/* if (res == res_org) */
	/* 	printf("5) OK!\n"); */
	/* else */
	/* 	printf("5) KO! Expected %i, got %i\n", res_org, res); */

	/* strcpy(str, "SHIN MEGAMI TENSEI"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */

	/* if (res == res_org) */
	/* 	printf("6) OK!\n"); */
	/* else */
	/* 	printf("6) KO! Expected %i, got %i\n", res_org, res); */

	return (0);
}
