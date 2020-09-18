#include <stdio.h>


void strsum(char to[], char from1[], char from2[])
/*{
    int i, j;
    for (i = 0; from1[i] != '\0'; i++)
        ;

    for (j = 0; (from1[i] = from2[j]) != '\0'; j++, i++) {
        to[i] = from1[i];
    }
}*/

{
    int i, j;

    i = 0;
    while ((to[i] = from1[i]) != '\0') {
        ++i;
    }
    j = 0;
    while ((to[i] = from2[j]) != '\0') {
        ++i;
        ++j;
    }
}

main()
{
    char s[100];
    strsum(s, "abc", "DE");
    printf("%s\n", s);
}