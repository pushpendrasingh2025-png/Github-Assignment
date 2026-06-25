#include<stdio.h>
int main()
{ 
    int i,j,arr1[20],n1,arr2[20],merge[40],n2;
    printf("Enter size of first array:");
    scanf("%d",&n1);
    printf("Enter %d element of first array:",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array:");
    scanf("%d",&n2);
    printf("Enter %d element of second array:\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++)
    {
        merge[i]=arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        merge[i] = arr2[j];
        i++;
    }
    printf("Merged array is:");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",merge[i]);
    }
    return 0;
}
