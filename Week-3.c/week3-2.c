#include <stdio.h>
#include <math.h>
int main()
{
    float P,R,T,CI;
    printf("Enter principal,rate and time: ");
    scanf("%f%f%f",&P,&R,&T);
    CI = P * pow(1 + R / 100, T) - P;
    printf("Compound Interest is %f", CI);
}