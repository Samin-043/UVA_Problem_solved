#include<bits/stdc++.h>

int main()
{
    int n,r;
    int ans;
    int loop=1;

    while((scanf("%d %d",&r,&n))!=EOF)
    {

        if(r==0&&n==0)
            break;


        ans=(r-1)/n;

        if(ans<=26)
        {
            printf("Case %d: %d\n",loop,ans);

        }
        if(ans>26)
        {
            printf("Case %d: impossible\n",loop);

        }

        loop++;



    }

    return 0;
}
