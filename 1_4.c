#include <stdio.h>

main()
{
float fahr, celsius;
int lower, upper, step;
int x = 67;
int y = 70;

lower = 0;
upper = 300;
step = 20;

printf("  %c      %c\n", x, y);
printf("\n");

celsius = lower;
while (celsius <= upper) {
fahr = (celsius * 9 / 5) + 32;
printf("%3.0f %6.1f\n", celsius, fahr);
celsius = celsius + step;
}
}
