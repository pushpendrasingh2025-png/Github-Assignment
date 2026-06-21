#include<stdio.h>
int main()
{
    int n,array[20],i,evencount=0,oddcount=0;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]%2==0)
            evencount++;
        else
            oddcount++;
    }
    printf("Number of even elements in the array is %d\n",evencount);
    printf("Number of odd elements in the array is %d\n",oddcount);
    return 0;
}