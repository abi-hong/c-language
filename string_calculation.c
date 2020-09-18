#include <stdio.h>

int strlength(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;

    return i;
}

main()
{
    int n;

    n = strlength("abcdef");
    printf("length=%d\n", n);

}
