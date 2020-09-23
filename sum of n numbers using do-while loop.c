//sum of n numbers using do-while loop
#include <stdio.h>

int main()
{
    int num=0,s=0;
    do
    {
        printf("Enter a no.:");
        scanf("%d",&num);
        s=s+num;
    }
    while(num!=0);
    printf("Total=%d",s);
    return 0;
}

