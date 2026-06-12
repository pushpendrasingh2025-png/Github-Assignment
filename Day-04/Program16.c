#include<stdio.h>
int main()
{
    int n,p,r,s,start,end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n",start,end);
    for(p=start;p<=end;p++) 
    {
        n=p;
        s=0;

       while(n!=0)
    
       { r=n%10;
        n=n/10;
        s=s+r*r*r;
       }
    
    if(s==p)
    {
        printf("%d\n",p);
    }
    }
return 0;

}
   
