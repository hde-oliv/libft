#include "libft.h"
#include "tests.h"

static char 	memset_str_1[50];
static char 	memset_str_2[50];
static void 	*memset_ptr_1;
static void 	*memset_ptr_2;

static int result_analyzer(void *got, void *want, size_t size)
{
	if (!memcmp(got, want, size))
		return (1);
	return (0);
}

int ft_memset_with_13_bytes_to_set(void)
{
	strcpy(memset_str_1, "The lazy dog jumped over something!");
	strcpy(memset_str_2, "The lazy dog jumped over something!");
	memset_ptr_1 = memset(memset_str_1, 'a', 13);
	memset_ptr_2 = ft_memset(memset_str_2, 'a', 13);
	return (result_analyzer(memset_str_2, memset_str_1, 15));
}

int ft_memset_with_1_bytes_to_set(void)
{
	strcpy(memset_str_1, "The lazy dog jumped over something!");
	strcpy(memset_str_2, "The lazy dog jumped over something!");
	memset_ptr_1 = memset(memset_str_1, 'a', 1);
	memset_ptr_2 = ft_memset(memset_str_2, 'a', 1);
	return (result_analyzer(memset_str_2, memset_str_1, 2));
}

int ft_memset_with_50_bytes_to_set(void)
{
	strcpy(memset_str_1, "The lazy dog jumped over something!");
	strcpy(memset_str_2, "The lazy dog jumped over something!");
	memset_ptr_1 = memset(memset_str_1, 'a', 50);
	memset_ptr_2 = ft_memset(memset_str_2, 'a', 50);
	return (result_analyzer(memset_str_2, memset_str_1, 50));
}

int ft_memset_check_the_pointer_return(void)
{
	strcpy(memset_str_1, "The lazy dog jumped over something!");
	memset_ptr_1 = memset(memset_str_1, 'a', 50);
	memset_ptr_2 = ft_memset(memset_str_1, 'a', 50);
	return (memset_ptr_1 == memset_ptr_2);
}