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
        {                                                       //10254
            int digit=n%10;//to get last digit                  //4
            sum+=digit;//add last digit to sum                  //4 
            n=n/10; //to remove the last digit of the number    //10254/10 = 1025.5 == 1025
        }
        printf("%d",sum);
    }
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}