#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    /* Write the logic to reverse the array. */
    i=0;
    int num1=num;
    while(i<num1)
    {
            int temp=*(arr+i);
            *(arr+i)= *(arr+num1-1);
            *(arr+num1-1)=temp;
            i++;
            num1--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}