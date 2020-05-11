#include<stdio.h>
int main()
{
    int i,n,a,b,j,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j==a)
             sum=0;
            if(j%2!=0)
            {
                sum+=j;
            }

        }
        printf("Case %d: %d\n",i+1,sum);

    }


    return 0;
}
