#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c);

int	main(void)
{
	char c;
	char c_o;

	c = 'a';
	c = ft_tolower(c);
	c_o = 'a';
	c_o = tolower(c_o);

	if (c == c_o)
		printf("1) OK!\n");
	else
		printf("1) KO! Expected %c, got %c", c_o, c);

	c = 'B';
	c = ft_tolower(c);
	c_o = 'B';
	c_o = tolower(c_o);

	if (c == c_o)
		printf("2) OK!\n");
	else
		printf("2) KO! Expected %c, got %c", c_o, c);

	c = '!';
	c = ft_tolower(c);
	c_o = '!';
	c_o = tolower(c_o);

	if (c == c_o)
		printf("3) OK!\n");
	else
		printf("3) KO! Expected %c, got %c", c_o, c);

	c = '\0';
	c = ft_tolower(c);
	c_o = '\0';

c_o = tolower(c_o);

	if (c == c_o)
		printf("4) OK!\n");
	else
		printf("4) KO! Expected %c, got %c", c_o, c);

	return (0);
}
