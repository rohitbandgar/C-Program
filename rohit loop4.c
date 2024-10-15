//loopl.c
//to print hello world 10 times
#include <stdio.h>//
int main()
{
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(n%1==0)
          printf("%d \t" ,i);
          i++;
    }
    return 0;
}          