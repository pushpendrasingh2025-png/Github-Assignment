#include<stdio.h>
int main()
{
    int n,s=0,array[20],i;
    float avg;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
        s=s+array[i];
    }
    avg=(float)s/n;
    printf("Sum of elements in the array is %d\n",s);
    printf("Average of elements in the array is %f\n",avg);
    return 0;
}