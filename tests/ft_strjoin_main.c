#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[90];
	char str2[90];
	char *p;

	strcpy(str1, "Shin ");
	strcpy(str2, "Megami");
	p = ft_strjoin(str1, str2);
	printf("%s", p);
	free(p);
	return(0);
}
