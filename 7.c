//print first 10 even number in reverse order
#include<stdio.h>
int main()
{
    int i;
    for(i=20;i>=1;i--)
    {
    if(i%2==0)
    printf("\n%d",i);
    }
    return 0;
}