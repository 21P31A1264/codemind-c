#include<stdio.h>
int main()
{
    int i=0,n,t=0;
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            t=1;
            break;
        }
    }
    if(t==1)
      printf("not a prime");
    else
      printf("prime");
}