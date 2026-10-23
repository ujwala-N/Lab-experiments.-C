#include<stdio.h>
int main()
{
 float P,T,R,SI;
 printf("Enter the principle,Rate,Time:");
 scanf("%f%f%f",&P,&R,&T);
 SI=P*T*R/100;
 printf("Simple intrest=%f",SI);
} 