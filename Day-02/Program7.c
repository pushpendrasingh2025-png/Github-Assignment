#include<stdio.h>
int main()
{
    int n,product=1,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n==0)
    {
        product=0;
    }
    
     while(n!=0)
        {
            r = n%10;
            product = product * r;
            n = n/10;
        }
        printf("Product of digits is : %d",product);
        return 0;
}