#include<stdio.h>
int main()
{
    int array[20],n,i,sum=0,total;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Enter %d elements:",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    total=n*(n+1)/2;
    printf("Missing number is %d",total-sum);
    return 0;

}