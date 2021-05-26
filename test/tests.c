#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include "../libft.h"

int main(void)
{
	/* char str[90]; */
	/* char str_2[90]; */
	/* char str_3[90]; */
	/* char str_5[10]; */
	/* char str_6[10]; */
	/* char num[90]; */
	/* char *p; */
	/* char *p_2; */
	/* char **a; */
	/* char c; */
	/* char c_o; */
	/* int res; */
	/* int res_org; */
	/* int j; */
	/* int k; */
	/* void *v; */
	/* void *w; */

	/* /\* libc *\/ */

	/* /\* ft_memset *\/ */
	/* printf("-----------FT_MEMSET----------\n"); */

	/* strcpy(str, "The lazy dog jumped over something!"); */
	/* strcpy(str_2, "The lazy dog jumped over something!"); */

	/* v = memset(str, 'a', 13); */
	/* w = ft_memset(str_2, 'a', 13); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumped over something!"); */
	/* strcpy(str_2, "The lazy dog jumped over something!"); */

	/* v = memset(str, 'a', 1); */
	/* w = ft_memset(str_2, 'a', 1); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumped over something!"); */
	/* strcpy(str_2, "The lazy dog jumped over something!"); */

	/* v = memset(str, 'a', 90); */
	/* w = ft_memset(str_2, 'a', 90); */
	/* if (!memcmp(str, str_2, sizeof(str))) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumped over something!"); */
	/* v = memset(str, 'a', 90); */
	/* w = ft_memset(str, 'a', 90); */
	/* if (v == w) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* /\* end ft_memset *\/ */

	/* /\* ft_bzero *\/ */
	/* printf("\n\n-----------FT_BZERO-----------\n"); */
	/* strcpy(str, "The lazy dog jumped over something!"); */
	/* strcpy(str_2, "The lazy dog jumped over something!"); */

	/* bzero(str, 12); */
	/* ft_bzero(str_2, 12); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumped over something!"); */
	/* strcpy(str_2, "The lazy dog jumped over something!"); */

	/* bzero(str, 1); */
	/* ft_bzero(str_2, 1); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumped over something!"); */
	/* strcpy(str_2, "The lazy dog jumped over something!"); */

	/* bzero(str, 90); */
	/* ft_bzero(str_2, 90); */
	/* if (!memcmp(str, str_2, sizeof(str))) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */
	/* /\* end ft_bzero *\/ */

	/* /\* ft_memcpy *\/ */
	/* printf("\n\n-----------FT_MEMCPY-----------\n"); */
	/* strcpy(str, "The lazy dog jumps over something"); */
	/* strcpy(str_2, "The lazy dog jumps over something"); */
	/* strcpy(str_3, "123456890"); */

	/* memcpy(str, str_3, 5); */
	/* ft_memcpy(str_2, str_3, 5); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* strcpy(str_2, "The lazy dog jumps over something"); */

	/* memcpy(str, str_3, 12); */
	/* ft_memcpy(str_2, str_3, 12); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* strcpy(str_2, "The lazy dog jumps over something"); */

	/* memcpy(str, str_3, 90); */
	/* ft_memcpy(str_2, str_3, 90); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* strcpy(str_2, "The lazy dog jumps over something"); */

	/* memcpy(str, str_3, 0); */
	/* ft_memcpy(str_2, str_3, 0); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* /\* end ft_memcpy *\/ */

	/* /\* ft_memccpy *\/ */
	/* printf("\n\n-----------FT_MEMCCPY-----------\n"); */
	/* strcpy(str, "Imagine that something is on fire"); */
	/* strcpy(str_2, "Imagine that something is on fire"); */
	/* strcpy(str_3, "But isn\'t ok!"); */

	/* memccpy(str, str_3, 'x', 9); */
	/* ft_memccpy(str_2, str_3, 'x', 9); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "Imagine that something is on fire"); */
	/* strcpy(str_2, "Imagine that something is on fire"); */

	/* memccpy(str, str_3, 's', 9); */
	/* ft_memccpy(str_2, str_3, 's', 9); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "Imagine that something is on fire"); */
	/* strcpy(str_2, "Imagine that something is on fire"); */

	/* memccpy(str, str_3, '\'', 9); */
	/* ft_memccpy(str_2, str_3, '\'', 9); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* strcpy(str, "Imagine that something is on fire"); */
	/* strcpy(str_2, "Imagine that something is on fire"); */

	/* memccpy(str, str_3, 's', 3); */
	/* ft_memccpy(str_2, str_3, 's', 3); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */

	/* strcpy(str, "Imagine that something is on fire"); */
	/* strcpy(str_2, "Imagine that something is on fire"); */

	/* memccpy(str, str_3, 'x', 0); */
	/* ft_memccpy(str_2, str_3, 'x', 0); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 05 - OK!\n"); */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */

	/* strcpy(str, "Imagine that something is on fire"); */
	/* strcpy(str_2, "Imagine that something is on fire"); */

	/* memccpy(str, str_3, 'x', strlen(str)); */
	/* ft_memccpy(str_2, str_3, 'x', strlen(str)); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 06 - OK!\n"); */
	/* else */
	/* 	printf("Test 06 - KO!\n"); */

	/* strcpy(str, "Imagine that something is on fire"); */
	/* strcpy(str_2, "Imagine that something is on fire"); */

	/* memccpy(str, str_3, 'I', 90); */
	/* ft_memccpy(str_2, str_3, 'I', 90); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 07 - OK!\n"); */
	/* else */
	/* 	printf("Test 07 - KO!\n"); */
	/* /\* end ft_memccpy *\/ */

	/* /\* ft_memmove *\/ */
	/* printf("\n\n-----------FT_MEMMOVE----------\n"); */
	/* strcpy(str, "1234567890"); */
	/* strcpy(str_2, "1234567890"); */

	/* memmove(str, &str[2], 3); */
	/* ft_memmove(str_2, &str_2[2], 3); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "1234567890"); */
	/* strcpy(str_2, "1234567890"); */

	/* memmove(&str[2], str, 3); */
	/* ft_memmove(&str_2[2], str_2, 3); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "1234567890"); */
	/* strcpy(str_2, "1234567890"); */

	/* memmove(str, str, 3); */
	/* ft_memmove(str_2, str_2, 3); */
	/* if (!memcmp(str, str_2, strlen(str))) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */
	/* /\* end ft_memmove *\/ */

	/* /\* ft_memchr *\/ */
	/* printf("\n\n-----------FT_MEMCHR-----------\n"); */
	/* strcpy(str, "This is a string"); */

	/* p = memchr(str, 'g', 5); */
	/* p_2 = ft_memchr(str, 'g', 5); */
	/* if (p == p_2) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* p = memchr(str, 'i', 6); */
	/* p_2 = ft_memchr(str, 'i', 6); */
	/* if (p == p_2) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* p = memchr(str, 's', 4); */
	/* p_2 = ft_memchr(str, 's', 4); */
	/* if (p == p_2) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* p = memchr(str, 's', 3); */
	/* p_2 = ft_memchr(str, 's', 3); */
	/* if (p == p_2) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* /\* end ft_memchr *\/ */

	/* /\* ft_memcmp *\/ */
	/* printf("\n\n-----------FT_MEMCMP-----------\n"); */

	/* strcpy(str, "The fact is that Jojolion is crap"); */
	/* strcpy(str_2, "The fact is that Stone Ocean is crap"); */
	/* res_org = memcmp(str, str_2, 17); */
	/* res = ft_memcmp(str, str_2, 17); */
	/* if (res == res_org) */
	/* 	printf("Test 00 - OK!\n"); */
	/* else */
	/* 	printf("Test 00 - KO!\n"); */

	/* strcpy(str, "The fact is that Jojolion is crap"); */
	/* strcpy(str_2, "The fact is that Stone Ocean is crap"); */
	/* res_org = memcmp(str, str_2, 16); */
	/* res = ft_memcmp(str, str_2, 16); */
	/* if (res == res_org) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "The fact is that Jojolion is crap"); */
	/* strcpy(str_2, "The fact is that Stone Ocean is crap"); */
	/* res_org = memcmp(str, str_2, 18); */
	/* res = ft_memcmp(str, str_2, 18); */
	/* if (res == res_org) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "The fact is that Jojolion is crap"); */
	/* strcpy(str_2, "The fact is that Stone Ocean is crap"); */
	/* res_org = memcmp(str, str_2, 25); */
	/* res = ft_memcmp(str, str_2, 25); */
	/* if (res == res_org) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* strcpy(str, "The fact is that Jojolion is crap"); */
	/* strcpy(str_2, "The fact is that Stone Ocean is crap"); */
	/* res_org = memcmp(str, str_2, 7); */
	/* res = ft_memcmp(str, str_2, 7); */
	/* if (res == res_org) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */

	/* strcpy(str, "The fact is that Jojolion is crap"); */
	/* strcpy(str_2, "The fact is that Stone Ocean is crap"); */
	/* res_org = memcmp(str, str_2, sizeof(str)); */
	/* res = ft_memcmp(str, str_2, sizeof(str)); */
	/* if (res == res_org) */
	/* 	printf("Test 05 - OK!\n"); */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */
	/* /\* end ft_memcmp *\/ */

	/* /\* ft_strlen *\/ */
	/* printf("\n\n-----------FT_STRLEN----------\n"); */
	/* strcpy(str, "EL ELOHIM ELOHO ELOHIM SEBAOTH"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "ELION EIECH EADIER EIECH ADONAI"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "JAH SADAI TETRAGRAMMATON SADAI"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* strcpy(str, "AGIOS O THEOS ISCHIROS ATHANATHOS"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */

	/* strcpy(str, "AGLA AMEN"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 05 - OK!\n"); */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */

	/* strcpy(str, "SHIN MEGAMI TENSEI"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 06 - OK!\n"); */
	/* else */
	/* 	printf("Test 06 - KO!\n"); */

	/* strcpy(str, "\0"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 07 - OK!\n"); */
	/* else */
	/* 	printf("Test 07 - KO!\n"); */

	/* strcpy(str, ""); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 08 - OK!\n"); */
	/* else */
	/* 	printf("Test 08 - KO!\n"); */

	/* strcpy(str, "0"); */
	/* res = ft_strlen(str); */
	/* res_org = strlen(str); */
	/* if (res == res_org) */
	/* 	printf("Test 09 - OK!\n"); */
	/* else */
	/* 	printf("Test 09 - KO!\n"); */
	/* /\* end ft_strlen *\/ */

	/* /\* ft_strlcpy *\/ */
	/* printf("\n\n-----------FT_STRLCPY----------\n"); */
	/* strlcpy(str, "The lazy dog jumped over something!", sizeof(str)); */
	/* ft_strlcpy(str_2, "The lazy dog jumped over something!", sizeof(str)); */
	/* if (!strcmp(str, str_2)) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strlcpy(str, "The lazy dog jumped over something!", 5); */
	/* ft_strlcpy(str_2, "The lazy dog jumped over something!", 5); */
	/* if (!strcmp(str, str_2)) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strlcpy(str, "The lazy dog jumped over something!", 0); */
	/* ft_strlcpy(str_2, "The lazy dog jumped over something!", 0); */
	/* if (!strcmp(str, str_2)) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */
	/* /\* end ft_strlcpy *\/ */

	/* /\* ft_strlcat *\/ */
	/* printf("\n\n-----------FT_STRLCAT----------\n"); */
    /* strcpy(str, "The lazy"); */
    /* strcpy(str_2, "The lazy"); */
	/* strcpy(str_3, " dog jumped over"); */
	/* res_org = strlcat(str, str_3, sizeof(str)); */
	/* res = ft_strlcat(str_2, str_3, sizeof(str)); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 01 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 01 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "The lazy"); */
    /* strcpy(str_2, "The lazy"); */
	/* res_org = strlcat(str, str_3, 5); */
	/* res = ft_strlcat(str_2, str_3, 5); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 02 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 02 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */


	/* strcpy(str, "The lazy"); */
    /* strcpy(str_2, "The lazy"); */
	/* res_org = strlcat(str, str_3, 0); */
	/* res = ft_strlcat(str_2, str_3, 0); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 03 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 03 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */


	/* strcpy(str_5, "ABCDEFGHI"); */
	/* strcpy(str_6, "ABCDEFGHI"); */
	/* res_org = strlcat(str_5, str_3, sizeof(str_5)); */
	/* res = ft_strlcat(str_6, str_3, sizeof(str_6)); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 04 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 04 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */


	/* strcpy(str_5, "ABCDEFGHI"); */
	/* strcpy(str_6, "ABCDEFGHI"); */
	/* res_org = strlcat(str_5, str_3, 5); */
	/* res = ft_strlcat(str_6, str_3, 5); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 05 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 05 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */


	/* strcpy(str_5, "ABCDEFGHI"); */
	/* strcpy(str_6, "ABCDEFGHI"); */
	/* res_org = strlcat(str_5, str_3, 0); */
	/* res = ft_strlcat(str_6, str_3, 0); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 06 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 06 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 06 - KO!\n"); */

	/* strcpy(str_5, "ABCDEFGHI"); */
	/* strcpy(str_6, "ABCDEFGHI"); */
	/* strcpy(str_3, ""); */
	/* res_org = strlcat(str_5, str_3, sizeof(str_5)); */
	/* res = ft_strlcat(str_6, str_3, sizeof(str_5)); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 07 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 07 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 07 - KO!\n"); */

	/* strcpy(str_5, "ABCDEFGHI"); */
	/* strcpy(str_6, "ABCDEFGHI"); */
	/* res_org = strlcat(str_5, str_3, 0); */
	/* res = ft_strlcat(str_6, str_3, 0); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 08 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 08 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 08 - KO!\n"); */

	/* strcpy(str_5, "ABCDEFGHI"); */
	/* strcpy(str_6, "ABCDEFGHI"); */
	/* res_org = strlcat(str_5, str_3, 5); */
	/* res = ft_strlcat(str_6, str_3, 5); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 09 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 09 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 09 - KO!\n"); */

	/* strcpy(str, "The lazy"); */
    /* strcpy(str_2, "The lazy"); */
	/* res_org = strlcat(str, str_3, sizeof(str)); */
	/* res = ft_strlcat(str_2, str_3, sizeof(str)); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 10 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 10 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 10 - KO!\n"); */


	/* strcpy(str, "The lazy"); */
    /* strcpy(str_2, "The lazy"); */
	/* res_org = strlcat(str, str_3, 5); */
	/* res = ft_strlcat(str_2, str_3, 5); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 11 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 11 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 11 - KO!\n"); */


	/* strcpy(str, "The lazy"); */
    /* strcpy(str_2, "The lazy"); */
	/* res_org = strlcat(str, str_3, 0); */
	/* res = ft_strlcat(str_2, str_3, 0); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 12 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 12 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 12 - KO!\n"); */

	/* strcpy(str, ""); */
    /* strcpy(str_2, ""); */
	/* strcpy(str_3, " dog jumped over"); */
	/* res_org = strlcat(str, str_3, sizeof(str)); */
	/* res = ft_strlcat(str_2, str_3, sizeof(str)); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 13 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 13 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 13 - KO!\n"); */

	/* strcpy(str, ""); */
    /* strcpy(str_2, ""); */
	/* res_org = strlcat(str, str_3, 0); */
	/* res = ft_strlcat(str_2, str_3, 0); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 14 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 14 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 14 - KO!\n"); */

	/* strcpy(str, ""); */
    /* strcpy(str_2, ""); */
	/* res_org = strlcat(str, str_3, 5); */
	/* res = ft_strlcat(str_2, str_3, 5); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 15 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 15 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 15 - KO!\n"); */

	/* strcpy(str_5, ""); */
	/* strcpy(str_6, ""); */
	/* res_org = strlcat(str_5, str_3, sizeof(str_5)); */
	/* res = ft_strlcat(str_6, str_3, sizeof(str_5)); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 16 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 16 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 16 - KO!\n"); */

	/* strcpy(str_5, ""); */
	/* strcpy(str_6, ""); */
	/* res_org = strlcat(str_5, str_3, 5); */
	/* res = ft_strlcat(str_6, str_3, 5); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 17 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 17 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 17 - KO!\n"); */

	/* strcpy(str_5, ""); */
	/* strcpy(str_6, ""); */
	/* res_org = strlcat(str_5, str_3, 0); */
	/* res = ft_strlcat(str_6, str_3, 0); */
	/* if (!strcmp(str, str_2)) */
	/* { */
	/* 	if (res == res_org) */
	/* 		printf("Test 18 - OK!\n"); */
	/* 	else */
	/* 		printf("Test 18 - Semi-OK!\n"); */
	/* } */
	/* else */
	/* 	printf("Test 18 - KO!\n"); */
	/* /\* end ft_strlcat *\/ */

	/* /\* ft_strchr *\/ */
	/* printf("\n\n-----------FT_STRCHR----------\n"); */
	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strchr(str, 'y'); */
	/* p = ft_strchr(str, 'y'); */
	/* if (p == p_2) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strchr(str, 'z'); */
	/* p = ft_strchr(str, 'z'); */
	/* if (p == p_2) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strchr(str, '\0'); */
	/* p = ft_strchr(str, '\0'); */
	/* if (p == p_2) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strchr(str, 'b'); */
	/* p = ft_strchr(str, 'b'); */
	/* if (p == p_2) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* /\* end ft_strchr *\/ */

	/* /\* ft_strrchr *\/ */
	/* printf("\n\n-----------FT_STRRCHR----------\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strrchr(str, 'y'); */
	/* p = ft_strrchr(str, 'y'); */
	/* if (p == p_2) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strrchr(str, 'z'); */
	/* p = ft_strrchr(str, 'z'); */
	/* if (p == p_2) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strrchr(str, '\0'); */
	/* p = ft_strrchr(str, '\0'); */
	/* if (p == p_2) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO! (Maybe because BSD version of strrchr is different)\n"); */

	/* strcpy(str, "The lazy dog jumps over something"); */
	/* p_2 = strrchr(str, 'b'); */
	/* p = ft_strrchr(str, 'b'); */
	/* if (p == p_2) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* /\* ft_strrchr *\/ */

	/* /\* ft_strnstr *\/ */
	/* printf("\n\n-----------FT_STRNSTR----------\n"); */
	/* strcpy(str, "O caseiro casou dentro da casa casada"); */
	/* p_2 = strnstr(str, "cas", 10); */
	/* p = ft_strnstr(str, "cas", 10); */
	/* if (p == p_2) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */

	/* p_2 = strnstr(str, "casad", 10); */
	/* p = ft_strnstr(str, "casad", 10); */
	/* if (p == p_2) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* p_2 = strnstr(str, "casad", 35); */
	/* p = ft_strnstr(str, "casad", 35); */
	/* if (p == p_2) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */

	/* p_2 = strnstr(str, "casad", 36); */
	/* p = ft_strnstr(str, "casad", 36); */
	/* if (p == p_2) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */

	/* p_2 = strnstr(str, "dentro", 10); */
	/* p = ft_strnstr(str, "dentro", 10); */
	/* if (p == p_2) */
	/* 	printf("Test 05 - OK!\n"); */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */

	/* p_2 = strnstr(str, "", 10); */
	/* p = ft_strnstr(str, "", 10); */
	/* if (p == p_2) */
	/* 	printf("Test 06 - OK!\n"); */
	/* else */
	/* 	printf("Test 06 - KO!\n"); */

	/* p_2 = strnstr(str, "dentro", 0); */
	/* p = ft_strnstr(str, "dentro", 0); */
	/* if (p == p_2) */
	/* 	printf("Test 07 - OK!\n"); */
	/* else */
	/* 	printf("Test 07 - KO!\n"); */

	/* p = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15); */
	/* p_2 = strnstr("lorem ipsum dolor sit amet", "dolor", 15); */
	/* if (p == p_2) */
	/* 	printf("Test 08 - OK!\n"); */
	/* else */
	/* { */
	/* 	printf("%p | %p\n", p_2, p); */
	/* 	printf("Test 08 - KO!\n"); */
	/* } */

	/* /\* end ft_strnstr *\/ */

	/* /\* ft_strncmp *\/ */
	/* printf("\n\n-----------FT_STRNCMP----------\n"); */
	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shiy happens!", 4); */
	/* res = ft_strncmp(str, "Shiy happens!", 4); */
	/* if (res == res_org) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shiy happens!", 3); */
	/* res = ft_strncmp(str, "Shiy happens!", 3); */
	/* if (res == res_org) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shiy happens!", 5); */
	/* res = ft_strncmp(str, "Shiy happens!", 5); */
	/* if (res == res_org) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shit happins!", 6); */
	/* res = ft_strncmp(str, "Shit happins!", 6); */
	/* if (res == res_org) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shit happins!", 10); */
	/* res = ft_strncmp(str, "Shit happins!", 10); */
	/* if (res == res_org) */
	/* 	printf("Test 05 - OK!\n"); */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */


	/* res_org = strncmp(str, "Shit happens!", 0); */
	/* res = ft_strncmp(str, "Shit happens!", 0); */
	/* 	if (res == res_org) */
	/* 	printf("Test 06 - OK!\n"); */
	/* else */
	/* 	printf("Test 06 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shiy happins!", 0); */
	/* res = ft_strncmp(str, "Shiy happins!", 0); */
	/* if (res == res_org) */
	/* 	printf("Test 07 - OK!\n"); */
	/* else */
	/* 	printf("Test 07 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shiy happins!", 0); */
	/* res = ft_strncmp(str, "Shiy happins!", 0); */
	/* if (res == res_org) */
	/* 	printf("Test 08 - OK!\n"); */
	/* else */
	/* 	printf("Test 08 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shit happens!", 40); */
	/* res = ft_strncmp(str, "Shit happens!", 40); */
	/* if (res == res_org) */
	/* 	printf("Test 09 - OK!\n"); */
	/* else */
	/* 	printf("Test 09 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shit!", 40); */
	/* res = ft_strncmp(str, "Shit!", 40); */
	/* if (res == res_org) */
	/* 	printf("Test 10 - OK!\n"); */
	/* else */
	/* 	printf("Test 10 - KO!\n"); */


	/* strcpy(str, "Shiy happens!"); */
	/* res_org = strncmp(str, "", 40); */
	/* res = ft_strncmp(str, "", 40); */
	/* if (res == res_org) */
	/* 	printf("Test 11 - OK!\n"); */
	/* else */
	/* 	printf("Test 11 - KO!\n"); */


	/* strcpy(str, ""); */
	/* res_org = strncmp(str, "Shit happens!", 40); */
	/* res = ft_strncmp(str, "Shit happens!", 40); */
	/* if (res == res_org) */
	/* 	printf("Test 12 - OK!\n"); */
	/* else */
	/* 	printf("Test 12 - KO!\n"); */


	/* strcpy(str, ""); */
	/* res_org = strncmp(str, "", 40); */
	/* res = ft_strncmp(str, "", 40); */
	/* if (res == res_org) */
	/* 	printf("Test 13 - OK!\n"); */
	/* else */
	/* 	printf("Test 13 - KO!\n"); */


	/* strcpy(str, "Shit happens!"); */
	/* res_org = strncmp(str, "Shiy happens!", 40); */
	/* res = ft_strncmp(str, "Shiy happens!", 40); */
	/* if (res == res_org) */
	/* 	printf("Test 14 - OK!\n"); */
	/* else */
	/* 	printf("Test 14 - KO!\n"); */
	/* /\* end ft_strncmp *\/ */

	/* /\* ft_atoi *\/ */
	/* printf("\n\n-----------FT_ATOI-----------\n"); */
	/* strcpy(num, "\f\f\f\r\r\t\t\n\n-50"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("1) OK!\n"); */
	/* else */
	/* 	printf("1) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "           +50"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("2) OK!\n"); */
	/* else */
	/* 	printf("2) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "\t\t\t\t\t\t\t+40"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("3) OK!\n"); */
	/* else */
	/* 	printf("3) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "\v\v\v\v\v90"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("4) OK!\n"); */
	/* else */
	/* 	printf("4) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "\v\v\v\v\v90"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("4) OK!\n"); */
	/* else */
	/* 	printf("4) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "--90"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("5) OK!\n"); */
	/* else */
	/* 	printf("5) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "-+90"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("6) OK!\n"); */
	/* else */
	/* 	printf("6) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "+-90"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("7) OK!\n"); */
	/* else */
	/* 	printf("7) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "++90"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("8) OK!\n"); */
	/* else */
	/* 	printf("8) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "+0"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("9) OK!\n"); */
	/* else */
	/* 	printf("9) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "-0"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("10) OK!\n"); */
	/* else */
	/* 	printf("10) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "-5894asdf9358"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("11) OK!\n"); */
	/* else */
	/* 	printf("11) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "+4-4+60"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("12) OK!\n"); */
	/* else */
	/* 	printf("12) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "-2147483647"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("13) OK!\n"); */
	/* else */
	/* 	printf("13) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "2147483647"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("14) OK!\n"); */
	/* else */
	/* 	printf("14) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "+3-648"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("15) OK!\n"); */
	/* else */
	/* 	printf("15) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "asdf-2483648"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("16) OK!\n"); */
	/* else */
	/* 	printf("16) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "-2147483648"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("17) OK!\n"); */
	/* else */
	/* 	printf("17) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "al-+2al147483648"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("18) OK!\n"); */
	/* else */
	/* 	printf("18) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, "2147483648"); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("19) OK!\n"); */
	/* else */
	/* 	printf("19) KO! Expected %d, got %d!\n", res_org, res); */

	/* strcpy(num, ""); */
	/* res = ft_atoi(num); */
	/* res_org = atoi(num); */
	/* if (res == res_org) */
	/* 	printf("20) OK!\n"); */
	/* else */
	/* 	printf("20) KO! Expected %d, got %d!\n", res_org, res); */
	/* /\* end ft_atoi *\/ */

	/* /\* ft_isalpha *\/ */
	/* printf("\n\n-----------FT_ISALPHA-----------\n"); */
	/* k = 0; */
	/* for (char i = 0; i <= 126; i++) */
	/* { */
	/* 	res_org = isalpha(i); */
	/* 	res = ft_isalpha(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 01 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 01 - OK!\n"); */

	/* j = 127; */
	/* res_org = isalpha(j); */
	/* res = ft_isalpha(j); */
	/* if (res == 0 && res_org == 0) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* k = 0; */
	/* for (char i = -128; i <= 0; i++) */
	/* { */
	/* 	res_org = isalpha(i); */
	/* 	res = ft_isalpha(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 03 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 03 - OK!\n"); */
	/* /\* end is_alpha *\/ */

	/* /\* ft_isdigit *\/ */
	/* printf("\n\n-----------FT_ISDIGIT-----------\n"); */
	/* k = 0; */
	/* for (char i = 0; i <= 126; i++) */
	/* { */
	/* 	res_org = isdigit(i); */
	/* 	res = ft_isdigit(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 01 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 01 - OK!\n"); */

	/* j = 127; */
	/* res_org = isdigit(j); */
	/* res = ft_isdigit(j); */
	/* if (res == 0 && res_org == 0) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* k = 0; */
	/* for (char i = -128; i <= 0; i++) */
	/* { */
	/* 	res_org = isdigit(i); */
	/* 	res = ft_isdigit(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 03 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 03 - OK!\n"); */
	/* /\* end ft_isdigit *\/ */

	/* /\* ft_isalnum *\/ */
	/* printf("\n\n-----------FT_ISALNUM-----------\n"); */
	/* k = 0; */
	/* for (char i = 0; i <= 126; i++) */
	/* { */
	/* 	res_org = isalnum(i); */
	/* 	res = ft_isalnum(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 01 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 01 - OK!\n"); */

	/* j = 127; */
	/* res_org = isalnum(j); */
	/* res = ft_isalnum(j); */
	/* if (res == 0 && res_org == 0) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* k = 0; */
	/* for (char i = -128; i <= 0; i++) */
	/* { */
	/* 	res_org = isalnum(i); */
	/* 	res = ft_isalnum(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 03 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 03 - OK!\n"); */
	/* /\* end ft_isalnum *\/ */

	/* /\* ft_isascii *\/ */
	/* printf("\n\n-----------FT_ISASCII-----------\n"); */
	/* k = 0; */
	/* for (char i = 0; i <= 126; i++) */
	/* { */
	/* 	res_org = isascii(i); */
	/* 	res = ft_isascii(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 01 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 01 - OK!\n"); */

	/* j = 127; */
	/* res_org = isascii(j); */
	/* res = ft_isascii(j); */
	/* if (res != 0 && res_org != 0) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* k = 0; */
	/* for (char i = -128; i <= 0; i++) */
	/* { */
	/* 	res_org = isascii(i); */
	/* 	res = ft_isascii(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 03 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 03 - OK!\n"); */
	/* /\* end ft_is_ascii *\/ */

	/* /\* ft_isprint *\/ */
	/* printf("\n\n-----------FT_ISPRINT-----------\n"); */
	/* k = 0; */
	/* for (char i = 0; i <= 126; i++) */
	/* { */
	/* 	res_org = isprint(i); */
	/* 	res = ft_isprint(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 01 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 01 - OK!\n"); */

	/* j = 127; */
	/* res_org = isprint(j); */
	/* res = ft_isprint(j); */
	/* if (res == 0 && res_org == 0) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */

	/* k = 0; */
	/* for (char i = -128; i <= 0; i++) */
	/* { */
	/* 	res_org = isprint(i); */
	/* 	res = ft_isprint(i); */
	/* 	if (res > 0 && res_org > 0) */
	/* 		continue ; */
	/* 	else if (res == 0 && res_org == 0) */
	/* 		continue ; */
	/* 	else */
	/* 	{ */
	/* 		k += 1; */
	/* 		printf("Test 03 - KO! (on: %i)\n", i); */
	/* 	} */
	/* } */
	/* if (k == 0) */
	/* 	printf("Test 03 - OK!\n"); */
	/* /\* end ft_isprint *\/ */

	/* /\* ft_toupper *\/ */
	/* printf("\n\n-----------FT_TOUPPER----------\n"); */
	/* c = 'a'; */
	/* c = ft_toupper(c); */
	/* c_o = 'a'; */
	/* c_o = toupper(c_o); */
	/* if (c == c_o) */
	/* 	printf("1) OK!\n"); */
	/* else */
	/* 	printf("1) KO! Expected %c, got %c", c_o, c); */

	/* c = 'B'; */
	/* c = ft_toupper(c); */
	/* c_o = 'B'; */
	/* c_o = toupper(c_o); */
	/* if (c == c_o) */
	/* 	printf("2) OK!\n"); */
	/* else */
	/* 	printf("2) KO! Expected %c, got %c", c_o, c); */

	/* c = '!'; */
	/* c = ft_toupper(c); */
	/* c_o = '!'; */
	/* c_o = toupper(c_o); */
	/* if (c == c_o) */
	/* 	printf("3) OK!\n"); */
	/* else */
	/* 	printf("3) KO! Expected %c, got %c", c_o, c); */

	/* c = '\0'; */
	/* c = ft_toupper(c); */
	/* c_o = '\0'; */
	/* c_o = toupper(c_o); */
	/* if (c == c_o) */
	/* 	printf("4) OK!\n"); */
	/* else */
	/* 	printf("4) KO! Expected %c, got %c", c_o, c); */
	/* /\* end ft_toupper *\/ */

	/* /\* ft_tolower *\/ */
	/* printf("\n\n-----------FT_TOLOWER----------\n"); */
	/* c = 'a'; */
	/* c = ft_tolower(c); */
	/* c_o = 'a'; */
	/* c_o = tolower(c_o); */
	/* if (c == c_o) */
	/* 	printf("1) OK!\n"); */
	/* else */
	/* 	printf("1) KO! Expected %c, got %c", c_o, c); */

	/* c = 'B'; */
	/* c = ft_tolower(c); */
	/* c_o = 'B'; */
	/* c_o = tolower(c_o); */
	/* if (c == c_o) */
	/* 	printf("2) OK!\n"); */
	/* else */
	/* 	printf("2) KO! Expected %c, got %c", c_o, c); */

	/* c = '!'; */
	/* c = ft_tolower(c); */
	/* c_o = '!'; */
	/* c_o = tolower(c_o); */
	/* if (c == c_o) */
	/* 	printf("3) OK!\n"); */
	/* else */
	/* 	printf("3) KO! Expected %c, got %c", c_o, c); */

	/* c = '\0'; */
	/* c = ft_tolower(c); */
	/* c_o = '\0'; */
	/* c_o = tolower(c_o); */
	/* if (c == c_o) */
	/* 	printf("4) OK!\n"); */
	/* else */
	/* 	printf("4) KO! Expected %c, got %c", c_o, c); */
	/* /\* end ft_tolower *\/ */

	/* /\* ft_calloc *\/ */
	/* printf("\n\n-----------FT_CALLOC-----------\n"); */
	/* v = calloc(10, 1); */
	/* w = ft_calloc(10, 1); */
	/* if (!memcmp(v, w, 10)) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */
	/* free(v); */
	/* free(w); */

	/* v = calloc(0, 1); */
	/* w = ft_calloc(0, 1); */
	/* if (w == v) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */
	/* free(v); */
	/* free(w); */
	/* /\* end ft_calloc *\/ */

	/* /\* ft_strdup *\/ */
	/* printf("\n\n-----------FT_STRDUP----------\n"); */
	/* strcpy(str, "SHIN"); */
	/* p = ft_strdup(str); */
	/* if (!strcmp(str, p)) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, ""); */
	/* p = ft_strdup(str); */
	/* if (!strcmp(str, p)) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */
	/* free(p); */

	/* bzero(str, sizeof(str)); */
	/* p = ft_strdup(str); */
	/* if (!strcmp(str, p)) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */
	/* free(p); */
	
	/* /\* end ft_strdup *\/ */

	/* /\* end libc*\/ */
	/* /\* additional *\/ */

	/* /\* ft_substr *\/ */
	/* printf("\n\n-----------FT_SUBSTR----------\n"); */
	/* strcpy(str, "Watermelon isn't that bad, ok!"); */
	/* p = ft_substr(str, 0, 10); */
	/* if (!strcmp(p, "Watermelon")) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "Watermelon isn't that bad, ok!"); */
	/* p = ft_substr(str, 0, 0); */
	/* if (p == NULL) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "Watermelon isn't that bad, ok!"); */
	/* p = ft_substr(str, 80, 90); */
	/* if (p == NULL) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "ABC"); */
	/* p = ft_substr(str, 0, 4); */
	/* if (p == NULL) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "ABC"); */
	/* p = ft_substr(str, 1, 2); */
	/* if (!strcmp(p, "BC")) */
	/* 	printf("Test 05 - OK!\n"); */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "ABC"); */
	/* p = ft_substr(str, 2, 1); */
	/* if (!strcmp(p, "C")) */
	/* 	printf("Test 06 - OK!\n"); */
	/* else */
	/* 	printf("Test 06 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "ABC"); */
	/* p = ft_substr(str, 2, 2); */
	/* if (!strcmp(p, "C")) */
	/* 	printf("Test 07 - OK!\n"); */
	/* else */
	/* 	printf("Test 07 - KO!\n"); */
	/* free(p); */
	/* /\* end ft_substr *\/ */

	/* /\* ft_strjoin *\/ */
	/* printf("\n\n-----------FT_STRJOIN----------\n"); */
	/* strcpy(str, "Shin "); */
	/* strcpy(str_2, "Megami"); */
	/* p = ft_strjoin(str, str_2); */
	/* if (!strcmp(p, "Shin Megami")) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "Shin "); */
	/* strcpy(str_2, ""); */
	/* p = ft_strjoin(str, str_2); */
	/* if (!strcmp(p, "Shin ")) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */
	/* free(p); */
	
	/* strcpy(str, ""); */
	/* strcpy(str_2, ""); */
	/* p = ft_strjoin(str, str_2); */
	/* if (p == NULL) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, ""); */
	/* strcpy(str_2, " Megami"); */
	/* p = ft_strjoin(str, str_2); */
	/* if (!strcmp(p, " Megami")) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* free(p); */
	
	/* /\* end ft_strjoin *\/ */

	/* /\* ft_strtrim *\/ */
	/* printf("\n\n-----------FT_STRTRIM----------\n"); */
	/* strcpy(str, "abcbcabcabcaababacHenriqueabcbabbabbacabaa"); */
	/* strcpy(str_2, "abc"); */

	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "Henrique")) */
	/* 	printf("Test 01 - OK!\n"); */
	/* else */
	/* 	printf("Test 01 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "abcbcabcabcaababacHenriqueabcvbabbabbacabaa"); */
	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "Henriqueabcv")) */
	/* 	printf("Test 02 - OK!\n"); */
	/* else */
	/* 	printf("Test 02 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "abcbcabcabcaabavbacHenriqueabcbabbabbacabaa"); */
	/* strcpy(str_2, "abc"); */
	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "vbacHenrique")) */
	/* 	printf("Test 03 - OK!\n"); */
	/* else */
	/* 	printf("Test 03 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, ""); */
	/* strcpy(str_2, "abc"); */
	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "")) */
	/* 	printf("Test 04 - OK!\n"); */
	/* else */
	/* 	printf("Test 04 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "abcbcabcabcaababacHenriqueabcbabbabbacabaa"); */
	/* strcpy(str_2, ""); */
	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "abcbcabcabcaababacHenriqueabcbabbabbacabaa")) */
	/* 	printf("Test 05 - OK!\n"); */
	/* else */
	/* 	printf("Test 05 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "aa"); */
	/* strcpy(str_2, "abc"); */
	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "")) */
	/* 	printf("Test 06 - OK!\n"); */
	/* else */
	/* 	printf("Test 06 - KO!\n"); */
	/* free(p); */

	/* strcpy(str, "aHa"); */
	/* strcpy(str_2, "abc"); */
	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "H")) */
	/* 	printf("Test 07 - OK!\n"); */
	/* else */
	/* 	printf("Test 07 - KO!\n"); */
	/* free(p); */


	/* strcpy(str, "aa"); */
	/* strcpy(str_2, "def"); */
	/* p = ft_strtrim(str, str_2); */
	/* if (!strcmp(p, "aa")) */
	/* 	printf("Test 08 - OK!\n"); */
	/* else */
	/* 	printf("Test 08 - KO!\n"); */
	/* free(p); */
	/* /\* end ft_strtrim *\/ */

	/* /\* ft_split *\/ */
	/* strcpy(str, "ababababababababa"); */
	/* a = ft_split(str, 'b'); */
	/* printf("%s", *&a[0]); */
	/* /\* end ft_split *\/ */

	/* /\* ft_itoa *\/ */
	/* printf("\n\n-----------FT_ITOA-----------\n"); */
	/* j = 758; */
	/* p = ft_itoa(j); */
	/* if (!strcmp(p, "758")) */
	/* 	printf("Test 1 - OK!\n"); */
	/* else */
	/* 	printf("Test 1 - KO!\n"); */
	/* free(p); */

	/* j = -758; */
	/* p = ft_itoa(j); */
	/* if (!strcmp(p, "-758")) */
	/* 	printf("Test 2 - OK!\n"); */
	/* else */
	/* 	printf("Test 2 - KO!\n"); */
	/* free(p); */

	/* j = INT_MAX; */
	/* p = ft_itoa(j); */
	/* if (!strcmp(p, "2147483647")) */
	/* 	printf("Test 3 - OK!\n"); */
	/* else */
	/* 	printf("Test 3 - KO!\n"); */
	/* free(p); */

	/* j = INT_MIN; */
	/* p = ft_itoa(j); */
	/* if (!strcmp(p, "-2147483648")) */
	/* 	printf("Test 4 - OK!\n"); */
	/* else */
	/* 	printf("Test 4 - KO!\n"); */
	/* free(p); */

	/* j = 0; */
	/* p = ft_itoa(j); */
	/* if (!strcmp(p, "0")) */
	/* 	printf("Test 5 - OK!\n"); */
	/* else */
	/* 	printf("Test 5 - KO!\n"); */
	/* free(p); */

	/* end ft_itoa */
	/* ft_putchar_fd */
	/* end ft_putchar_fd */
	/* ft_putstr_fd */
	/* end ft_putstr_fd */
	/* ft_putendl_fd */
	/* end ft_putendl_fd */
	/* ft_putnbr_fd */
	/* char **a; */
	/* a = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '); */
	/* for (size_t i = 0; a[i]; i++) */
	/* { */
	/* 	printf("%s\n", a[i]); */
	/* } */
	/* end ft_putnbr_fd */
	/* end additional */
	ft_putnbr_fd(-2147483648, 1);

	/* bonus */
	/* end bonus */

	return (0);
}
