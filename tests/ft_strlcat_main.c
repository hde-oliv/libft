#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main()
{
    char first[] = "This is ";
    char last[] = "a";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

	strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}
