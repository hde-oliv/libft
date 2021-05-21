#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include "../libft.h"

int main(void)
{
	int res;
	int i;
	int *x;
	int res_o;
	int res_org;
	char num[50];
	char str[90];
	char str_2[90];
	char *p;
    char first[] = "This is ";
    char last[] = "a";
    int r;
    int size = 16;
    char buffer[size];
	int org;
	int yrs;
	char *p_org;
	char *q;
	char c;
	char c_o;
	char str1[90];
	char str2[90];
	char *d;
	int j;
	char set[90];

	/* libc */
	/* ft_memset */
	printf("\n\n-----------FT_MEMSET----------\n");
	strcpy(str, "Final Fantasy is shit!");
	memset(str, 'a', 13);
	printf("%s\n", str);
	strcpy(str, "Final Fantasy is shit!");
	ft_memset(str, 'a', 13);
	printf("%s\n", str);
	/* end ft_memset */
	/* ft_bzero */
	printf("\n\n-----------FT_BZERO-----------\n");
	strcpy(str, "Black Metal is better than Death Metal");
	bzero(str, 12);
	for (int i = 0; i < 13; i++)
		if (str[i] == '\0')
			str[i] += 48;
	printf("%s\n", str);
	strcpy(str, "Black Metal is better than Death Metal");
	ft_bzero(str, 12);
	for (int i = 0; i < 13; i++)
		if (str[i] == '\0')
			str[i] += 48;
	printf("%s\n", str);
	/* end ft_bzero */
	/* ft_memcpy */
	printf("\n\n-----------FT_MEMCPY-----------\n");
	strcpy(str, "The lazy dog jumps over something");
	strcpy(str_2, "123456890");
	memcpy(str, str_2, 5);
	printf("%s\n", str);
	strcpy(str, "The lazy dog jumps over something");
	strcpy(str_2, "123456890");
	ft_memcpy(str, str_2, 5);
	printf("%s\n", str);
	/* end ft_memcpy */
	/* ft_memccpy */
	printf("\n\n-----------FT_MEMCCPY-----------\n");
	printf("1)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, 'x', 9);
	printf("%s\n", str);
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, 'x', 9);
	printf("%s\n", str);
	printf("\n\n2)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, 's', 9);
	printf("%s\n", str);
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, 's', 9);
	printf("%s\n", str);
	printf("\n\n3)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, '\'', 9);
	printf("%s\n", str);
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, '\'', 9);
	printf("%s\n", str);
	printf("\n\n4)\n");
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	memccpy(str, str_2, 's', 3);
	printf("%s\n", str);
	strcpy(str, "Imagine that something is on fire");
	strcpy(str_2, "But isn\'t ok!");
	ft_memccpy(str, str_2, 's', 3);
	printf("%s\n", str);
	/* end ft_memccpy */
	/* ft_memmove */
	printf("\n\n-----------FT_MEMMOVE----------\n");
	printf("1)\n");
	strcpy(str, "1234567890");
	memmove(str, &str[2], 3);
	printf("%s\n", str);
	strcpy(str, "1234567890");
	ft_memmove(str, &str[2], 3);
	printf("%s\n", str);
	printf("\n2)\n");
	strcpy(str, "1234567890");
	memmove(&str[2], str, 3);
	printf("%s\n", str);
	strcpy(str, "1234567890");
	ft_memmove(&str[2], str, 3);
	printf("%s\n", str);
	printf("\n3)\n");
	strcpy(str, "1234567890");
	memmove(str, str, 3);
	printf("%s\n", str);
	strcpy(str, "1234567890");
	ft_memmove(str, str, 3);
	printf("%s\n", str);
	/* end ft_memmove */
	/* ft_memchr */
	printf("\n\n-----------FT_MEMCHR-----------\n");
	printf("1)\n");
	strcpy(str, "This is a string");
	x = memchr(str, 'g', 5);
	printf("%p\n", (void *)x);
	strcpy(str, "This is a string");
	x = ft_memchr(str, 'g', 5);
	printf("%p\n", (void *)x);
	printf("\n\n2)\n");
	strcpy(str, "This is a string");
	x = memchr(str, 'i', 6);
	printf("%p\n", (void *)x);
	strcpy(str, "This is a string");
	x = ft_memchr(str, 'i', 6);
	printf("%p\n", (void *)x);
	printf("\n\n3)\n");
	strcpy(str, "This is a string");
	x = memchr(str, 's', 4);
	printf("%p\n", (void *)x);
	strcpy(str, "This is a string");
	x = ft_memchr(str, 's', 4);
	printf("%p\n", (void *)x);
	printf("\n\n4)\n");
	strcpy(str, "This is a string");
	x = memchr(str, 's', 3);
	printf("%p\n", (void *)x);
	strcpy(str, "This is a string");
	x = ft_memchr(str, 's', 3);
	printf("%p\n", (void *)x);
	/* end ft_memchr */
	/* ft_memcmp */
	printf("\n\n-----------FT_MEMCMP-----------\n");
	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 17);
	res = ft_memcmp(str, str_2, 17);
	printf("Org: %i | Yours: %i\n", res_org, res);
	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 16);
	res = ft_memcmp(str, str_2, 16);
	printf("Org: %i | Yours: %i\n", res_org, res);
	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 18);
	res = ft_memcmp(str, str_2, 18);
	printf("Org: %i | Yours: %i\n", res_org, res);
	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 25);
	res = ft_memcmp(str, str_2, 25);
	printf("Org: %i | Yours: %i\n", res_org, res);
	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, 7);
	res = ft_memcmp(str, str_2, 7);
	printf("Org: %i | Yours: %i\n", res_org, res);
	strcpy(str, "The fact is that Jojolion is crap");
	strcpy(str_2, "The fact is that Stone Ocean is crap");
	res_org = memcmp(str, str_2, sizeof(str));
	res = ft_memcmp(str, str_2, sizeof(str));
	printf("Org: %i | Yours: %i\n", res_org, res);
	/* end ft_memcmp */
	/* ft_strlen */
	printf("\n\n-----------FT_STRLEN----------\n");
	strcpy(str, "EL ELOHIM ELOHO ELOHIM SEBAOTH");
	res = ft_strlen(str);
	res_org = strlen(str);
	if (res == res_org)
		printf("1) OK!\n");
	else
		printf("1) KO! Expected %i, got %i\n", res_org, res);
	strcpy(str, "ELION EIECH EADIER EIECH ADONAI");
	res = ft_strlen(str);
	res_org = strlen(str);
	if (res == res_org)
		printf("2) OK!\n");
	else
		printf("2) KO! Expected %i, got %i\n", res_org, res);
	strcpy(str, "JAH SADAI TETRAGRAMMATON SADAI");
	res = ft_strlen(str);
	res_org = strlen(str);
	if (res == res_org)
		printf("3) OK!\n");
	else
		printf("3) KO! Expected %i, got %i\n", res_org, res);
	strcpy(str, "AGIOS O THEOS ISCHIROS ATHANATHOS");
	res = ft_strlen(str);
	res_org = strlen(str);
	if (res == res_org)
		printf("4) OK!\n");
	else
		printf("4) KO! Expected %i, got %i\n", res_org, res);
	strcpy(str, "AGLA AMEN");
	res = ft_strlen(str);
	res_org = strlen(str);
	if (res == res_org)
		printf("5) OK!\n");
	else
		printf("5) KO! Expected %i, got %i\n", res_org, res);
	strcpy(str, "SHIN MEGAMI TENSEI");
	res = ft_strlen(str);
	res_org = strlen(str);
	if (res == res_org)
		printf("6) OK!\n");
	else
		printf("6) KO! Expected %i, got %i\n", res_org, res);
	/* end ft_strlen */
	/* ft_strlcpy */
	/* end ft_strlcpy */
	/* ft_strlcat */
	printf("\n\n-----------FT_STRLCAT----------\n");
    strcpy(buffer,first);
    r = strlcat(buffer,last,size);
    puts(buffer);
    printf("Value returned: %d\n",r);
    if ( r > size )
        puts("String truncated");
    else {
        puts("String was fully copied");
	}
	strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);
    puts(buffer);
    printf("Value returned: %d\n",r);
    if ( r > size )
        puts("String truncated");
    else {
        puts("String was fully copied");
	}
	/* end ft_strlcat */
	/* ft_strchr */
	printf("\n\n-----------FT_STRCHR----------\n");
	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, 'y');
	p = ft_strchr(str, 'y');
	printf("Org: %p | Yours: %p\n", p_org, p);
	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, 'z');
	p = ft_strchr(str, 'z');
	printf("Org: %p | Yours: %p\n", p_org, p);
	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, '\0');
	p = ft_strchr(str, '\0');
	printf("Org: %p | Yours: %p\n", p_org, p);
	strcpy(str, "The lazy dog jumps over something");
	p_org = strchr(str, 'b');
	p = ft_strchr(str, 'b');
	printf("Org: %p | Yours: %p\n", p_org, p);
	/* end ft_strchr */
	/* ft_strrchr */
	printf("\n\n-----------FT_STRRCHR----------\n");
	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, 'o');
	p = ft_strrchr(str, 'o');
	printf("Org: %p | Yours: %p\n", p_org, p);
	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, 'z');
	p = ft_strrchr(str, 'z');
	printf("Org: %p | Yours: %p\n", p_org, p);
	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, '\0');
	p = ft_strrchr(str, '\0');
	printf("Org: %p | Yours: %p\n", p_org, p);
	strcpy(str, "The lazy dog jumps over something");
	p_org = strrchr(str, 'b');
	p = ft_strrchr(str, 'b');
	printf("Org: %p | Yours: %p\n", p_org, p);
	/* ft_strrchr */
	/* ft_strnstr */
	printf("\n\n-----------FT_STRNSTR----------\n");
	strcpy(str, "O caseiro casou dentro da casa casada");
	p_org = strnstr(str, "cas", 10);
	p = ft_strnstr(str, "cas", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);
	p_org = strnstr(str, "casad", 10);
	p = ft_strnstr(str, "casad", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);
	p_org = strnstr(str, "casad", 35);
	p = ft_strnstr(str, "casad", 35);
	printf("Org: %p | Yours: %p\n", p_org, p);
	p_org = strnstr(str, "casad", 36);
	p = ft_strnstr(str, "casad", 36);
	printf("Org: %p | Yours: %p\n", p_org, p);
	p_org = strnstr(str, "dentro", 10);
	p = ft_strnstr(str, "dentro", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);
	p_org = strnstr(str, "", 10);
	p = ft_strnstr(str, "", 10);
	printf("Org: %p | Yours: %p\n", p_org, p);
	p_org = strnstr(str, "dentro", 0);
	p = ft_strnstr(str, "dentro", 0);
	printf("Org: %p | Yours: %p\n", p_org, p);
	/* end ft_strnstr */
	/* ft_strncmp */
	printf("\n\n-----------FT_STRNCMP----------\n");
	printf("1\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 4);
	yrs = ft_strncmp(str, "Shiy happens!", 4);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n2\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 3);
	yrs = ft_strncmp(str, "Shiy happens!", 3);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n4\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 5);
	yrs = ft_strncmp(str, "Shiy happens!", 5);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n5\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happins!", 6);
	yrs = ft_strncmp(str, "Shit happins!", 6);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n6\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happins!", 10);
	yrs = ft_strncmp(str, "Shit happins!", 10);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n7\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happens!", 0);
	yrs = ft_strncmp(str, "Shit happens!", 0);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n8\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happins!", 0);
	yrs = ft_strncmp(str, "Shiy happins!", 0);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n9\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happins!", 0);
	yrs = ft_strncmp(str, "Shiy happins!", 0);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n10\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit happens!", 40);
	yrs = ft_strncmp(str, "Shit happens!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n11\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shit!", 40);
	yrs = ft_strncmp(str, "Shit!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n12\n");
	strcpy(str, "Shiy happens!");
	org = strncmp(str, "", 40);
	yrs = ft_strncmp(str, "", 40);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n13\n");
	strcpy(str, "");
	org = strncmp(str, "Shit happens!", 40);
	yrs = ft_strncmp(str, "Shit happens!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n14\n");
	strcpy(str, "");
	org = strncmp(str, "", 40);
	yrs = ft_strncmp(str, "", 40);
	printf("Org: %i | Yrs: %i", org, yrs);
	printf("\n15\n");
	strcpy(str, "Shit happens!");
	org = strncmp(str, "Shiy happens!", 40);
	yrs = ft_strncmp(str, "Shiy happens!", 40);
	printf("Org: %i | Yrs: %i", org, yrs);
	/* end ft_strncmp */
	/* ft_atoi */
	printf("\n\n-----------FT_ATOI-----------\n");
	strcpy(num, "\f\f\f\r\r\t\t\n\n-50");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("1) OK!\n");
	else
		printf("1) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "           +50");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("2) OK!\n");
	else
		printf("2) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "\t\t\t\t\t\t\t+40");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("3) OK!\n");
	else
		printf("3) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "\v\v\v\v\v90");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("4) OK!\n");
	else
		printf("4) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "\v\v\v\v\v90");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("4) OK!\n");
	else
		printf("4) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "--90");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("5) OK!\n");
	else
		printf("5) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "-+90");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("6) OK!\n");
	else
		printf("6) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "+-90");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("7) OK!\n");
	else
		printf("7) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "++90");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("8) OK!\n");
	else
		printf("8) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "+0");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("9) OK!\n");
	else
		printf("9) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "-0");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("10) OK!\n");
	else
		printf("10) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "-5894asdf9358");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("11) OK!\n");
	else
		printf("11) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "+4-4+60");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("12) OK!\n");
	else
		printf("12) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "-2147483647");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("13) OK!\n");
	else
		printf("13) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "2147483647");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("14) OK!\n");
	else
		printf("14) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "+3-648");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("15) OK!\n");
	else
		printf("15) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "asdf-2483648");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("16) OK!\n");
	else
		printf("16) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "-2147483648");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("17) OK!\n");
	else
		printf("17) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "al-+2al147483648");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("18) OK!\n");
	else
		printf("18) KO! Expected %d, got %d!\n", res_o, res);
	strcpy(num, "2147483648");
	res = ft_atoi(num);
	res_o = atoi(num);
	if (res == res_o)
		printf("19) OK!\n");
	else
		printf("19) KO! Expected %d, got %d!\n", res_o, res);
	/* end ft_atoi */
	/* ft_isalpha */
	printf("\n\n-----------FT_ISALPHA-----------\n");
	for (char i = 0; i <= 126; i++)
	{
		res_o = isalpha(i);
		res = ft_isalpha(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	for (char i = -128; i <= 0; i++)
	{
		res_o = isalpha(i);
		res = ft_isalpha(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	/* end is_alpha */
	/* ft_isdigit */
	printf("\n\n-----------FT_ISDIGIT-----------\n");
	for (char i = 0; i <= 126; i++)
	{
		res_o = isdigit(i);
		res = ft_isdigit(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	j = 127;
	res_o = isdigit(j);
	res = ft_isdigit(j);
	printf("DEL | org = %i ; my = %i\n", res_o, res);
	for (char i = -128; i <= 0; i++)
	{
		res_o = isdigit(i);
		res = ft_isdigit(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	/* end ft_isdigit */
	/* ft_isalnum */
	printf("\n\n-----------FT_ISALNUM-----------\n");
	for (char i = 0; i <= 126; i++)
	{
		res_o = isalnum(i);
		res = ft_isalnum(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	for (char i = -128; i <= 0; i++)
	{
		res_o = isalnum(i);
		res = ft_isalnum(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	/* end ft_isalnum */
	/* ft_isascii */
	printf("\n\n-----------FT_ISASCII-----------\n");
	for (char i = 0; i <= 126; i++)
	{
		res_o = isascii(i);
		res = ft_isascii(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	j = 127;
	res_o = isascii(j);
	res = ft_isascii(j);
	printf("DEL | org = %i ; my = %i\n", res_o, res);
	for (char i = -128; i <= 0; i++)
	{
		res_o = isascii(i);
		res = ft_isascii(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	/* end ft_is_ascii */
	/* ft_isprint */
	printf("\n\n-----------FT_ISPRINT-----------\n");
	for (char i = 0; i <= 126; i++)
	{
		res_o = isprint(i);
		res = ft_isprint(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	j = 127;
	res_o = isprint(j);
	res = ft_isprint(j);
	printf("DEL | org = %i ; my = %i\n", res_o, res);
	for (char i = -128; i <= 0; i++)
	{
		res_o = isprint(i);
		res = ft_isprint(i);
		printf("%c | org = %i ; my = %i\n", i, res_o, res);
	}
	/* end ft_isprint */
	/* ft_toupper */
	printf("\n\n-----------FT_TOUPPER----------\n");
	c = 'a';
	c = ft_toupper(c);
	c_o = 'a';
	c_o = toupper(c_o);
	if (c == c_o)
		printf("1) OK!\n");
	else
		printf("1) KO! Expected %c, got %c", c_o, c);
	c = 'B';
	c = ft_toupper(c);
	c_o = 'B';
	c_o = toupper(c_o);
	if (c == c_o)
		printf("2) OK!\n");
	else
		printf("2) KO! Expected %c, got %c", c_o, c);
	c = '!';
	c = ft_toupper(c);
	c_o = '!';
	c_o = toupper(c_o);
	if (c == c_o)
		printf("3) OK!\n");
	else
		printf("3) KO! Expected %c, got %c", c_o, c);
	c = '\0';
	c = ft_toupper(c);
	c_o = '\0';
	c_o = toupper(c_o);
	if (c == c_o)
		printf("4) OK!\n");
	else
		printf("4) KO! Expected %c, got %c", c_o, c);
	/* end ft_toupper */
	/* ft_tolower */
	printf("\n\n-----------FT_TOLOWER----------\n");
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
	/* end ft_tolower */
	/* ft_calloc */
	printf("\n\n-----------FT_CALLOC-----------\n");
	p = calloc(10, 1);
	q = ft_calloc(10, 1);
	for (int i = 0; i < 10; i++)
		printf("%c", q[i] + 48);
	printf("\n");
	free(p);
	free(q);
	/* end ft_calloc */
	/* ft_strdup */
	printf("\n\n-----------FT_STRDUP----------\n");
	strcpy(str, "SHIN");
	d = ft_strdup(str);
	printf("%s\n%s\n", str, d);
	free(d);
	/* end ft_strdup */
	/* end libc*/

	/* additional */
	/* ft_substr */
	printf("\n\n-----------FT_SUBSTR----------\n");
	strcpy(str, "Watermelon isn't that bad, ok!");
	p = ft_substr(str, 0, 10);
	printf("%s\n", p);
	free(p);
	/* end ft_substr */
	/* ft_strjoin */
	printf("\n\n-----------FT_STRJOIN----------\n");
	strcpy(str1, "Shin ");
	strcpy(str2, "Megami");
	p = ft_strjoin(str1, str2);
	printf("%s", p);
	free(p);
	/* end ft_strjoin */
	/* ft_strtrim */
	printf("\n\n-----------FT_STRTRIM----------\n");
	printf("\nHenrique: ");
	strcpy(str, "abcbcabcabcaababacHenriqueabcbabbabbacabaa");
	strcpy(set, "abc");
	p = ft_strtrim(str, set);
	printf("%s\n", p);
	free(p);
	printf("\nHenriqueabcv: ");
	strcpy(str, "abcbcabcabcaababacHenriqueabcvbabbabbacabaa");
	strcpy(set, "abc");
	p = ft_strtrim(str, set);
	printf("%s\n", p);
	free(p);
	printf("\nvbacHenrique: ");
	strcpy(str, "abcbcabcabcaabavbacHenriqueabcbabbabbacabaa");
	strcpy(set, "abc");
	p = ft_strtrim(str, set);
	printf("%s\n", p);
	free(p);
	printf("\n(null): ");
	strcpy(str, "");
	strcpy(set, "abc");
	p = ft_strtrim(str, set);
	printf("%s\n", p);
	free(p);
	printf("\n(null): ");
	strcpy(str, "abcbcabcabcaababacHenriqueabcbabbabbacabaa");
	strcpy(set, "");
	p = ft_strtrim(str, set);
	printf("%s\n", p);
	free(p);
	/* end ft_strtrim */
	/* ft_split */
	/* end ft_split */
	/* ft_itoa */
	printf("\n\n-----------FT_ITOA-----------\n");
	i = 758;
	p = ft_itoa(i);
	printf("%s\n", p);
	free(p);
	i = -758;
	p = ft_itoa(i);
	printf("%s\n", p);
	free(p);
	i = INT_MAX;
	p = ft_itoa(i);
	printf("%s\n", p);
	free(p);
	i = INT_MIN;
	p = ft_itoa(i);
	printf("%s\n", p);
	free(p);
	i = 0;
	p = ft_itoa(i);
	printf("%s\n", p);
	free(p);
	/* end ft_itoa */
	/* ft_putchar_fd */
	/* end ft_putchar_fd */
	/* ft_putstr_fd */
	/* end ft_putstr_fd */
	/* ft_putendl_fd */
	/* end ft_putendl_fd */
	/* ft_putnbr_fd */
	/* end ft_putnbr_fd */
	/* end additional */

	/* bonus */
	/* end bonus */

	return (0);
}
