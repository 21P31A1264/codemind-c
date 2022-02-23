#include<stdio.h>
void check(int n)
{
    int s=0,p=1,d;
    while(n>0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(s==p)
      printf("Spy Number");
    else
      printf("Not Spy Number");
}
int main()
{
    int n;
    scanf("%d",&n);
    check(n);
    return 0;
}