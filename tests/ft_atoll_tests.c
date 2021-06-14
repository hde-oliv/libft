#include "libft.h"
#include "tests.h"

char			atoll_array[30];
long long int	atoll_counter;

static int	result_analyzer(long long got, long long want)
{
	if (got == want)
		return (1);
	return (0);
}

int	ft_atoll_with_zero(void)
{
	strcpy(atoll_array, "0");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 0));
}

int	ft_atoll_with_minus_one(void)
{
	strcpy(atoll_array, "-1");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, -1));
}

int	ft_atoll_with_one(void)
{
	strcpy(atoll_array, "1");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 1));
}

int	ft_atoll_with_max_int(void)
{
	strcpy(atoll_array, "2147483647");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 2147483647));
}

int	ft_atoll_with_min_int(void)
{
	strcpy(atoll_array, "-2147483648");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, -2147483648));
}

int	ft_atoll_with_double_max_int(void)
{
	strcpy(atoll_array, "4294967294");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 4294967294));
}

int	ft_atoll_with_double_min_int(void)
{
	strcpy(atoll_array, "-4294967296");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, -4294967296));
}

int	ft_atoll_with_max_long_long(void)
{
	strcpy(atoll_array, "9223372036854775807");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 9223372036854775807));
}

int	ft_atoll_with_min_long_long(void)
{
	strcpy(atoll_array, "-9223372036854775808");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, (-9223372036854775807 - 1)));
}

int	ft_atoll_with_gibberish1(void)
{
	strcpy(atoll_array, "+-922337808");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 0));
}

int	ft_atoll_with_gibberish2(void)
{
	strcpy(atoll_array, "-9a08");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, -9));
}

int	ft_atoll_with_gibberish3(void)
{
	strcpy(atoll_array, "-92+3");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, -92));
}

int	ft_atoll_with_gibberish4(void)
{
	strcpy(atoll_array, "+a9");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 0));
}

int	ft_atoll_with_gibberish5(void)
{
	strcpy(atoll_array, "n-9+8");
	atoll_counter = ft_atoll(atoll_array);
	return (result_analyzer(atoll_counter, 0));
}