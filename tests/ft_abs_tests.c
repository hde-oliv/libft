#include "libft.h"
#include "tests.h"

int abs_integer;

static int result_analyzer(int abs_got, int abs_want)
{
	if (abs_got == abs_want)
		return (1);
	return (0);
}

int ft_abs_with_minus_six(void)
{
	abs_integer = ft_abs(-6);
	return (result_analyzer(abs_integer, 6));
}

int ft_abs_with_zero(void)
{
	abs_integer = ft_abs(-0);
	return (result_analyzer(abs_integer, 0));
}