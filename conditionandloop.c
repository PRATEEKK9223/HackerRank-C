#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    if((a>=1 && b<=pow(10,6)) && (b>=1 && b<=pow(10,6)))
    {
        for(int n=a;n<=b;n++)
        {
             if(n>=1 && n<=9)
            {
                if(n==1)
                    printf("one\n");
                else if(n==2)
                    printf("two\n");
                else if(n==3)
                    printf("three\n");
                else if(n==4)
                    printf("four\n");
                else if(n==5)
                    printf("five\n");
                else if(n==6)
                    printf("six\n");
                else if(n==7)
                    printf("seven\n");
                else if(n==8)
                    printf("eight\n");
                else 
                    printf("nine\n");
            }
            else  
            {
                if(n%2==0)
                    printf("even\n");
                else
                    printf("odd\n"); 
            }
    
        
    }
            
        }
       
  	// Complete the code.

    return 0;
}

