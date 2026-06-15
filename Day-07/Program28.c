#include<stdio.h>
int reverse(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }
    else
    {
        rev=(rev*10)+(n%10);
        return reverse(n/10,rev);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The reverse of %d is: %d\n", n, reverse(n,0));
    return 0;
}