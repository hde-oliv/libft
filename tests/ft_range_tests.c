#include "libft.h"
#include "tests.h"

int *range_array;

static int is_null(void *range_ptr)
{
	if (range_ptr == NULL)
		return (1);
	return (0);
}

static int result_analyzer(int *range_ptr, int range_check, int range_offset)
{
	int range_counter;

	range_counter = 0;
	while (range_counter != range_check)
	{
		if (range_ptr[range_counter] == (range_counter + range_offset))
		{
			range_counter++;
			continue ;
		}
		else
		{
			free(range_ptr);
			return (0);
		}
	}
	free(range_array);
	return (1);
}

int	ft_range_with_zero_and_zero(void)
{
	range_array = ft_range(0, 0);
	return (is_null(range_array));
}

int	ft_range_with_negative_and_zero(void)
{
	range_array = ft_range(-2, 0);
	return (is_null(range_array));
}

int	ft_range_with_zero_and_negative(void)
{
	range_array = ft_range(0, -4);
	return (is_null(range_array));
}

int	ft_range_with_negative_and_negative_1(void)
{
	range_array = ft_range(-2, -6);
	return (is_null(range_array));
}

int	ft_range_with_negative_and_negative_2(void)
{
	range_array = ft_range(-6, -2);
	return (is_null(range_array));
}

int	ft_range_with_positive_and_zero(void)
{
	range_array = ft_range(2, 0);
	return (is_null(range_array));
}

int	ft_range_with_zero_and_positive(void)
{
	range_array = ft_range(0, 5);
	return (result_analyzer(range_array, 5, 0));
}

int	ft_range_with_positive_and_positive(void)
{
	range_array = ft_range(5, 9);
	return (result_analyzer(range_array, 4, 5));
}
