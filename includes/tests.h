#ifndef TESTS_H
# define TESTS_H
# include <stdio.h>
# include <string.h>
# include <strings.h>

/* Libc */

int ft_memset_with_13_bytes_to_set(void);
int ft_memset_with_1_bytes_to_set(void);
int ft_memset_with_50_bytes_to_set(void);
int ft_memset_check_the_pointer_return(void);

/* Personal*/
int	ft_range_with_zero_and_zero(void);
int	ft_range_with_zero_and_negative(void);
int	ft_range_with_negative_and_zero(void);
int	ft_range_with_negative_and_negative_1(void);
int	ft_range_with_negative_and_negative_2(void);
int	ft_range_with_positive_and_zero(void);
int	ft_range_with_zero_and_positive(void);
int	ft_range_with_positive_and_positive(void);

int	ft_abs_with_minus_six(void);
int	ft_abs_with_zero(void);

int	ft_atoll_with_zero(void);
int	ft_atoll_with_minus_one(void);
int	ft_atoll_with_one(void);
int	ft_atoll_with_min_int(void);
int	ft_atoll_with_max_int(void);
int	ft_atoll_with_double_max_int(void);
int	ft_atoll_with_double_min_int(void);
int	ft_atoll_with_max_long_long(void);
int	ft_atoll_with_min_long_long(void);
int	ft_atoll_with_gibberish1(void);
int	ft_atoll_with_gibberish2(void);
int	ft_atoll_with_gibberish3(void);
int	ft_atoll_with_gibberish4(void);
int	ft_atoll_with_gibberish5(void);

#endif
