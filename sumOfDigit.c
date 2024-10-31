#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    if(n>=10000 && n<=99999)
    {
        while(n!=0)
        {
            int digit=n%10;
            sum+=digit;
            n=n/10;
        }
        printf("%d",sum);
    }
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}