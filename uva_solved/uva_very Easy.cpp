#include<bits/stdc++.h>

int main()
{
    int n,a;

    int sum;

    while((scanf("%d %d",&n,&a))!=EOF)
    {
        sum=0;

        for(int i=1;i<=n;i++)
        {
            sum+=i*(pow(a,i));

        }



        printf("%d\n",sum);

    }

    return 0;
}

