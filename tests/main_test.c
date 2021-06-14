#include "tests.h"

static void print_result(int bool, int reset);

int	main(void)
{
	printf("\nLibc:");
	printf("\n  ft_memset: ");

	print_result(ft_memset_with_13_bytes_to_set(), 1);
	print_result(ft_memset_with_1_bytes_to_set(), 0);
	print_result(ft_memset_with_50_bytes_to_set(), 0);
	print_result(ft_memset_check_the_pointer_return(), 0);
	printf("\n");
/*****************************************************************************/
	printf("\nAdditional:");
/*****************************************************************************/
	printf("\nBonus:");
/*****************************************************************************/
	printf("\nTree:");
/*****************************************************************************/
	printf("\nPersonal:");
	printf("\n  ft_range: ");
	print_result(ft_range_with_zero_and_zero(), 1);
	print_result(ft_range_with_zero_and_negative(), 0);
	print_result(ft_range_with_negative_and_zero(), 0);
	print_result(ft_range_with_negative_and_negative_1(), 0);
	print_result(ft_range_with_negative_and_negative_2(), 0);
	print_result(ft_range_with_positive_and_zero(), 0);
	print_result(ft_range_with_zero_and_positive(), 0);
	print_result(ft_range_with_positive_and_positive(), 0);

	printf("\n  ft_abs: ");
	print_result(ft_abs_with_minus_six(), 1);
	print_result(ft_abs_with_zero(), 0);

	printf("\n  ft_atoll: ");
	print_result(ft_atoll_with_zero(), 1);
	print_result(ft_atoll_with_minus_one(), 0);
	print_result(ft_atoll_with_one(), 0);
	print_result(ft_atoll_with_min_int(), 0);
	print_result(ft_atoll_with_max_int(), 0);
	print_result(ft_atoll_with_double_max_int(), 0);
	print_result(ft_atoll_with_double_min_int(), 0);
	print_result(ft_atoll_with_max_long_long(), 0);
	print_result(ft_atoll_with_min_long_long(), 0);
	print_result(ft_atoll_with_gibberish1(), 0);
	print_result(ft_atoll_with_gibberish2(), 0);
	print_result(ft_atoll_with_gibberish3(), 0);
	print_result(ft_atoll_with_gibberish4(), 0);
	print_result(ft_atoll_with_gibberish5(), 0);
/*****************************************************************************/
	printf("\n\n");
	return (0);
}

static void print_result(int bool, int reset)
{
	static int	print_result_counter;

	if (reset)
		print_result_counter = 0;
	if (bool)
		printf("%i.OK   ", print_result_counter);
	else
		printf("%i.KO   ", print_result_counter);
	print_result_counter++;
}
