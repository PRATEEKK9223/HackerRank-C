#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    int frequency[10]={0};
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i]<='9')
        {
            frequency[s[i]-'0']++;
        }
        i++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",frequency[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
