#include<stdio.h>
void main()
{
    int n,n1,n2,nth;
    printf("enter the terms");
    scanf("%d",&n);
    n1=0;
    n2=1;
    for(int i=0;i<n;i++)
    {
        if(n==1)
            printf("%d",n1);
        else if(n==2)
            printf("%d",n2);
        else
        {
            nth=n1+n2;
            n1=n2;
            nth=n2;
        }   
    }
}
