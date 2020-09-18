#include <stdio.h>

void copy(char to[], char from[])
{
    int i;
    for (i = 0; (to[i] = from[i]) != '\0'; i++)
        ;
}

main()
{
    char from[7] = "abcdef";
    char to[10];
    copy(to, from);

    printf("to[] : %s\n", to);
}