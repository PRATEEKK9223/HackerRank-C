#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *ptr,n,sum=0;
    //printf("enter the size of the array\n");
    scanf("%d",&n);
    //printf("%d\n",n);
    ptr=(int*)malloc(n*sizeof(int));
    //printf("enter hte array elemets\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        //printf("%d ",*(ptr+i));
        sum+=*(ptr+i);
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}