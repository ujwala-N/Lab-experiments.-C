#include <stdio.h>
int main()
{
    int a, b, c, d, e,T;
    float A;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    T= a + b + c + d + e;
    A = T / 5.0;
    printf("\nTotal marks are %d",T);
    printf("\nAverage marks are %f",A);
}