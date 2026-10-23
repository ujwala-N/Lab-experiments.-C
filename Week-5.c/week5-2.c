#include <stdio.h>
int main()
{
    int u;
    float b;
    printf("Enter units consumed: ");
    scanf("%d", &u);
    if (u<= 100)
    {
        b= u * 1.5;
    }    
    else if (u<= 200)
    {
      b= u* 2.5;
    }  
    else if (u<= 500)
    {
        b= u* 4.00;
    }    
    else
    {
        b = u*6;
    }    
    printf("Total electricity bill is Rs. %f", b);
}