#include <stdio.h>
int main()
{
        int n,p,r,s=0,fact;
        printf("Enter any number: ");
        scanf("%d", &n);
        p=n;
        while(n!=0)
        {
            r=n%10;
            fact=1;
            for(int i=1;i<=r;i++)
            {
                fact=fact*i;
            }
            s=s+fact;
            n=n/10;
        }
        if(s==p)
        {
            printf("%d is a strong number.",p);
        }
        else
        {
            printf("%d is not a strong number.",p);
        }
    return 0;
}