#include <stdio.h>
int main()
{
    float s,t,d;
    printf("Enter speed(m/s) and time(sec): ");
    scanf("%f%f", &s,&t);
    d=s*t;
    printf("Distance travelled is %f", d);
}