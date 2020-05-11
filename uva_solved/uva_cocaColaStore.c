#include<stdio.h>
int main()
{
    int n,i,count;
    while((scanf("%d",&n))==1)
    {
        count=0;
        if(n==0)
            break;

        while(n>=3)
        {
            n=n-3;
            count++;
            n=n+1;

        }

        if(n==2)
        {
            count++;
            printf("%d\n",count);
        }
        else
        {
            printf("%d\n",count);


        }

    }
    return 0;
}
