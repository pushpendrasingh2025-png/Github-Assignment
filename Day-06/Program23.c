#include<stdio.h>
int main()
{
    int n,p,count=1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    p=n;
    while(n!=0)
    {
        if(n%2!=0)
        {
            count++;
        }
        n=n/2;
    }
    printf("The number of set bits in %d is: %d\n", p, count);
    return 0;
}