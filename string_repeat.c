#include <stdio.h>

void strmul(char s[], char t[], int n);
void strsum(char to[], char from1[], char from2[]);

main()
{
    char s[100], t[100], u[100];

    strmul(t, "abc", 2);
    printf("t: %s\n", t);
    strmul(u, "DE", 3);
    printf("u: %s\n", u);
    strsum(s, t, u); 
    printf("출력: %s\n", s);
}


void strmul(char s[], char t[], int n)
{
    int i, j, m;
    m = 0;
    /*m은 이중for문을 돌 때, 초기화 되지 않아 main함수에서
    출력되는 배열이 반복됨*/
    for (j = 1; j <= n; j++) {
        for (i = 0; t[i] != '\0'; i++) {
            s[m] = t[i];
            m++;
        }
        /*이 for문은 이중for문을 돌 때, m값이 0으로 초기화되기 때문에
        main함수에서 출력할 때, 반복되서 출력되지 않음
        for (i = 0, m = 0; (s[m] = t[i]) != '\0'; i++, m++) {
            s[m];
        }*/
    }
    /*아래 코드를 작성하지 않으면 쓰레기값이 출력됨*/
    s[m] = '\0';
}

void strsum(char to[], char from1[], char from2[])
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