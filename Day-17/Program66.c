#include<stdio.h>
int main()
{
    int i,j,arr1[20],n1,arr2[20],union_arr[40],n2,k=0,flag;
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
        union_arr[k]=arr1[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        flag=0;
        for(j=0;j<k;j++)
        {
            if(arr2[i]==union_arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            union_arr[k] = arr2[i];
            k++;
        }
    }

    printf("Union of arrays is:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", union_arr[i]);
    }

    return 0;
}





