#include<stdio.h>
int main()
{
    int n,i,max=0;
    while((scanf("%d",&n))==1)
    {
        max=n;
        while(n>=3)
        {
            max+=n/3;
            n=(n/3)+(n%3);

        }

        if(n==1)
        {
            max++;
        }

        printf("%d\n",max);

    }

    return 0;
}
