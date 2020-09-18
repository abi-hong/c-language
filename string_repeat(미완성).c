#include <stdio.h>

void strmul(char s[], char t[], int n);

main()
{
    char t[100], u[100];

    strmul(t, "abc", 2);
    strmul(u, "DE", 3);
    /*strsum(s, t, u);*/
    /*printf("%s\n", s);*/
}


void strmul(char s[], char t[], int n)
{
    int i, j, m;

    for (j = 1; j <= n; j++) {
        for (i = 0, m = 0; (s[m] = t[i]) != '\0'; i++, m++) {
        printf("%c", s[m]);
        }
    }
    printf("\n");
}