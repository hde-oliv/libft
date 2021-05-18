#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s);

int main(void)
{
	char str[5];
	char *d;

	strcpy(str, "SHIN");
	d = ft_strdup(str);
	printf("%s\n%s\n", str, d);
	return (0);
}
