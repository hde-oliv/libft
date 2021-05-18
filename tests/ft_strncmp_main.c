#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	char str[90];
	int org;
	int yrs;

	printf("1\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 4);
	yrs = ft_strncmp(str, "Shiy happens!", 4);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n2\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 3);
	yrs = ft_strncmp(str, "Shiy happens!", 3);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n4\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 5);
	yrs = ft_strncmp(str, "Shiy happens!", 5);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n5\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happins!", 6);
	yrs = ft_strncmp(str, "Shit happins!", 6);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n6\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happins!", 10);
	yrs = ft_strncmp(str, "Shit happins!", 10);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n7\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happens!", 0);
	yrs = ft_strncmp(str, "Shit happens!", 0);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n8\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happins!", 0);
	yrs = ft_strncmp(str, "Shiy happins!", 0);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n9\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happins!", 0);
	yrs = ft_strncmp(str, "Shiy happins!", 0);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n10\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happens!", 40);
	yrs = ft_strncmp(str, "Shit happens!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n11\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit!", 40);
	yrs = ft_strncmp(str, "Shit!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n12\n");
	strcpy(str, "Shiy happens!");
	org = strncmp(str, "", 40);
	yrs = ft_strncmp(str, "", 40);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n13\n");
	strcpy(str, "");
	org = strncmp(str, "Shit happens!", 40);
	yrs = ft_strncmp(str, "Shit happens!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n14\n");
	strcpy(str, "");
	org = strncmp(str, "", 40);
	yrs = ft_strncmp(str, "", 40);
	printf("Org: %i | Yrs: %i", org, yrs);

	printf("\n15\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 40);
	yrs = ft_strncmp(str, "Shiy happens!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);






}
