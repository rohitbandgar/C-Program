//loopl.c
//to print hello world 10 times
#include <stdio.h>//
int main()
{
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
          printf("%d x %d =%d \n",n,i,n*i);
          i++;
    }
    return 0;
}